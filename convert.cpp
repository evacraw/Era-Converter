#include <iostream>
#include <sstream>
#include <vector>
#include "era.hpp"
using namespace std;

//"H31"と入力されたら2019と返す (和暦 => 西暦)
string JCtoAC(const string eraName, unsigned int eraNum)
{
  int sumNum = 0;
  for (int i = 0; i < eraNames.size(); i++)
  {
    const string &key = eraNames[i];
    int value = erasYears[i];
    if (eraName == key)
    {
      if (eraNum > value || eraNum <= 0)
      {
        string noresult = "The year " + eraName + to_string(eraNum) + " doesn't exist.";
        return noresult;
      }
      int result = startYear + sumNum + eraNum;
      return to_string(result);
      break;
    }
    sumNum += value - 1;
  }
}

//2019と入力されたら"H31"と文字列で返す (西暦 => 和暦)
string ACtoJC(int inputNum)
{
  if (inputNum > thisYear)
  {
    string future = "The year " + to_string(inputNum) + " is the future. It may not be Reiwa Era.";
    return future;
  }
  else if (inputNum < startYear)
  {
    string before = "Sorry, I don't know about before" + to_string(startYear);
    return before;
  }
  int subNum = 0;
  for (int i = 0; i < eraNames.size(); i++)
  {
    string key = eraNames[i];
    int value = erasYears[i];
    int checkNum = inputNum - startYear - value - subNum;
    if (checkNum < 0)
    {
      ostringstream oss;
      int num = value + checkNum;
      oss << key << num;
      return oss.str().c_str();
      break;
    }
    else
    {
      subNum += value - 1;
    }
  }
}