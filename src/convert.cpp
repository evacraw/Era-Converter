#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "./include/era.hpp"
using namespace std;

// "Heisei 31"と入力されたら2019と返す (和暦 => 西暦)
string JCtoAC(const char *eraNameChar, const char *eraNumChar) {
  string eraName = string(eraNameChar);
  int eraNum = atoi(eraNumChar);
  vector<int> adNumVec = eras.at(eraName);
  // 指定された年数が指定された元号に存在しない場合
  if(eraNum > adNumVec[1]) {
    string noresult = "The year " + eraName + to_string(eraNum) + " doesn't exist.";
    return noresult;
  }
  int result = adNumVec[0] + eraNum;
  return to_string(result);
}

// 2019と入力されたら"Heisei 31"と文字列で返す (西暦 => 和暦)
// 未来の年号対応と最後の年対応明日やる
string ACtoJC(char *inputChar) {
  int inputNum = atoi(inputChar);
  // 今年より先の西暦を指定された場合、令和〇〇年として返す
  if (inputNum > thisYear){
    vector<int> reiwaStartYearVector = eras.at("Reiwa");
    int reiwaStartYear = reiwaStartYearVector[0];
    int futureResultNum = inputNum - reiwaStartYear + 1; // 今年が加味されないので+1
    string futureResult = "Reiwa" + to_string(futureResultNum);
    return futureResult;
  }
  // 1614年、江戸時代より前の西暦を指定された場合
  if (inputNum < startYear) {
    string before = "Sorry, I don't know about before" + to_string(startYear);
    return before;
  }
  for (auto it: eras) {
    vector<int> numVec = eras.at(it.first);
    int endOfItsEra = numVec[0] + numVec[1];
    if(numVec[0] <= inputNum && endOfItsEra > inputNum) {
      int resultNum = inputNum - numVec[0] + 1;
      string resultString = it.first + to_string(resultNum);
      return resultString;
      break;
    }
  }
}
