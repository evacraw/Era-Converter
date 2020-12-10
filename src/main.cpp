#include <iostream>
#include <vector>
#include "./include/era.hpp"

int main() {
  std::string AC = JCtoAC("Reiwa", 1);
  std::string ACOverFlow = JCtoAC("Tenna", 10);
  std::string JC = ACtoJC(1861);
  std::string JCOverFlow = ACtoJC(2040);
  std::cout << AC << std::endl;
  std::cout << ACOverFlow << std::endl;
  std::cout << JC << std::endl;
  std::cout << JCOverFlow << std::endl;
  return 0;
}
