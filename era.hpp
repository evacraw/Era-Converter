#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;

void insertNames();
void JCtoAC(string eraName, int eraNum);
void ACtoJC(int inputNum);

extern const int startYear;
extern const int thisYear;

extern vector<tuple<string, int>> names;