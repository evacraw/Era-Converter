#include <iostream>
#include "./include/era.hpp"

int main(int argc, char *argv[]) {
  if(argc < 2){
    std::cout << "More than 2 argument is required" << std::endl;
    return 0;
  }
  if(argc == 2){
    std::string JC = ACtoJC(argv[1]);
    std::cout << JC << std::endl;
    return 0;
  }
  if(argc == 3){
    std::string AC = JCtoAC(argv[1], argv[2]);
    std::cout << AC << std::endl;
    return 0;
  }
  return 0;
}
