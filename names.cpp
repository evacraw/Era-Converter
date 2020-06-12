#include <iostream>
#include <vector>
#include <tuple>
#include "era.hpp"
using namespace std;

const time_t now = time(nullptr);
const tm *lt = localtime(&now);
const int startYear = 1615 - 1; //元年なので1を引く
const int thisYear = 2000 + lt->tm_year;
const int reiwa = (thisYear - 100) - 2019 + 1; //元号のスタートは0年ではないため1を足す

const vector<string> erasNames = {
    "Genna", "Kanei", "Shouhou", "Keiwan", "Jouou", "Meireki", "Manji", "Kanbun", "Enpou", "Tenna", "Joukyou", "Genroku", "Houei",
    "Syoutoku", "Kyouhou", "Genbun", "Kanpou", "Enkyou", "Kanen", "Houreki", "Meiwa", "Anei", "Tenmei", "Kansei", "Kyouwa", "Bunka",
    "Bunsei", "Tenpou", "Kouka", "Kaei", "Ansei", "Manei", "Bunkyuu", "Genji", "Keiou", "Meiji", "Taisyou", "Syouwa", "Heisei", "Reiwa"};

const vector<int> erasYears = {10, 21, 5, 5, 4, 4, 4, 13, 9, 4, 5, 17, 8, 6, 21, 6, 4, 5, 4, 14, 9, 10, 9, 13, 4, 15, 13, 15, 5, 7, 7, 2, 4, 2, 4, 45, 15, 64, 31, reiwa};