#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include "era.hpp"
using namespace std;

//"Heisei,31"と入力されたら2019と返す (和暦 => 西暦)
string JCtoAC(string eraName, unsigned int eraNum) {
  vector<int> adNumVec = eras.at(eraName);
  if(eraNum > adNumVec[1]) {
    string noresult = "The year " + eraName + to_string(eraNum) + " doesn't exist.";
    return noresult;
  }
  int result = adNumVec[0] + eraNum;
  return to_string(result);
}

// 2019と入力されたら"Heisei 31"と文字列で返す (西暦 => 和暦)
// 未来の年号対応と最後の年対応明日やる
string ACtoJC(int inputNum) {
  if (inputNum < startYear) {
    string before = "Sorry, I don't know about before" + to_string(startYear);
    return before;
  }
  for (auto& it: eras) {
    vector<int> numVec = eras.at(it.first);
    int endOfItsEra = numVec[0] + numVec[1];
    if(numVec[0] <= inputNum && endOfItsEra > inputNum) {
      int result = inputNum - numVec[0] + 1;
      ostringstream oss;
      oss << it.first << result;
      return oss.str().c_str();
    }
  }
}
