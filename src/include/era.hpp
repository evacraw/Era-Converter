#include <string>
#include <vector>
#include <unordered_map>

std::string JCtoAC(const std::string, unsigned int);
std::string ACtoJC(int);

extern const int startYear;
extern const int thisYear;

extern const std::unordered_map<std::string, std::vector<int>> eras;
