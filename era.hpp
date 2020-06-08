#include <string>
void insertNames();
void JCtoAC(std::string eraName, unsigned int eraNum);
void ACtoJC(int inputNum);

extern const int startYear;
extern const int thisYear;

extern std::vector<std::tuple<std::string, int>> names;