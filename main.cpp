//"H31"と入力されたら2019と数値で返す
//2019と入力されたら"H31"と文字列で返す
#include <iostream>
#include "era.hpp"

int main()
{
  int AC = JCtoAC("Reiwa", 1);
  std::string JC = ACtoJC(1861);
  std::cout << AC << std::endl;
  std::cout << JC << std::endl;
  return 0;
}