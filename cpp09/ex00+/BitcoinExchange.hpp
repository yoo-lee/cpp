#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>
#include <map>

#define MAX	2147483647
float findRate(const std::string& date, const std::map<std::string, float>& data);
void checkInput(char* file, const std::map<std::string, float>& data);

std::map<std::string, float> readData();
void printMap(const std::map<std::string, float>& myMap);
std::string moveDateBackOneDay(const std::string& date);
bool ifValidDate(const std::string& date);
bool ifValidValue(const std::string& value);

#endif