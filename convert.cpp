#include <iostream>
#include <sstream>
#include <vector>
#include "era.hpp"
using namespace std;

int JCtoAC(string eraName, unsigned int eraNum)
{
  insertNames();
  int sumNum = 0;
  for (int i = 0; i < names.size(); i++)
  {
    string key = get<0>(names[i]);
    int value = get<1>(names[i]);
    if (eraName == key)
    {
      if (eraNum > value || eraNum <= 0)
      {
        cout << "The year " << eraName << eraNum << " doesn't exist." << endl;
      }
      else
      {
        int result = startYear + sumNum + eraNum;
        return result;
        break;
      }
    }
    sumNum += value - 1;
  }
}

string ACtoJC(int inputNum)
{
  if (inputNum > thisYear)
  {
    cout << "The year " << inputNum << " is the future. It may not be Reiwa Era." << endl;
  }
  else if (inputNum < startYear)
  {
    cout << "Sorry, I don't know about before" << startYear << endl;
  }
  else
  {
    int subNum = 0;
    insertNames();
    for (int i = 0; i < names.size(); i++)
    {
      string key = get<0>(names[i]);
      int value = get<1>(names[i]);
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
}