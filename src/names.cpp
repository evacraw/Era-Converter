#include <iostream>
#include <unordered_map>
#include <vector>
#include <tuple>
#include "./include/era.hpp"
using namespace std;

const time_t now = time(nullptr);
const tm *lt = localtime(&now);
const int startYear = 1615 - 1; //元年なので1を引く
const int thisYear = 1900 + lt->tm_year;
const int reiwa = thisYear - 2019 + 1; //元号のスタートは0年ではないため1を足す

const unordered_map<string, vector<int>> eras = {
  {"Genna", {1614, 10}}, {"Kanei", {1624, 21}}, {"Shouhou", {1645, 3}}, {"Keian", {1648, 4}}, {"Jouou", {1652, 4}}, {"Meireki", {1655, 3}}, {"Manji", {1658, 3}}, {"Kanbun", {1661, 12}},
  {"Enpou", {1673, 8}}, {"Tenna", {1681, 3}}, {"Joukyou", {1684, 4}}, {"Genroku", {1688, 16}}, {"Houei", {1704, 7}}, {"Syoutoku", {1711, 5}}, {"Kyouhou", {1716, 20}}, {"Genbun", {1736, 5}},
  {"Kanpou", {1741, 3}}, {"Enkyou", {1744, 4}}, {"Kanen", {1748, 3}}, {"Houreki", {1751, 13}}, {"Meiwa", {1764, 8}}, {"Anei", {1772, 9}}, {"Tenmei", {1781, 8}}, {"Kansei", {1789, 12}},
  {"Kyouwa", {1801, 3}}, {"Bunka", {1804, 14}}, {"Bunsei", {1818, 13}}, {"Tenpou", {1831, 14}}, {"Kouka", {1845, 3}}, {"Kaei", {1848, 7}}, {"Ansei", {1855, 5}},  {"Manei", {1860, 1}},
  {"Bunkyuu", {1861, 3}}, {"Genji", {1864, 1}}, {"Keiou", {1865, 3}}, {"Meiji", {1868, 44}}, {"Taisyou", {1912, 14}}, {"Syouwa", {1926, 63}}, {"Heisei", {1989, 30}}, {"Reiwa", {2019, reiwa}}
}; 
