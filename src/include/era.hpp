#include <string>
#include <vector>
#include <unordered_map>

std::string JCtoAC(const char*, const char*);
std::string ACtoJC(char*);

extern const int startYear;
extern const int thisYear;

extern const std::unordered_map<std::string, std::vector<int>> eras;
