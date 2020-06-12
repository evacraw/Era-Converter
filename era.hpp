#include <string>
void insertNames();
int JCtoAC(const string &eraName, int eraNum);
string ACtoJC(int inputNum);

extern const int startYear;
extern const int thisYear;

extern std::vector<std::tuple<std::string, int>> names;