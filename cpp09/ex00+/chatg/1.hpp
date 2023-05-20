#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <climits>

class BitcoinExchange {
private:
    std::map<std::string, double> bitcoinData;

public:
    BitcoinExchange(const std::string& filename);
    std::map<std::string, double> readData(const std::string& filename);
    std::string findClosestDate(const std::string& targetDate);
    void processInputFile(const std::string& inputFileName);
};

#endif /* BTC_HPP */
