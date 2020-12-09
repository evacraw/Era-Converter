#include <iostream>
#include <vector>
#include "era.hpp"

int main()
{
  std::string AC = JCtoAC("Reiwa", 1);
  std::string JC = ACtoJC(1861);
  std::cout << AC << std::endl;
  std::cout << JC << std::endl;
  return 0;
}