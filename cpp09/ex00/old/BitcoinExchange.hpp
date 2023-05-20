#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>
#include <fstream>   // Include for std::ifstream
#include <sstream>   // Include for std::istringstream

class BitcoinExchange {
private:
    std::map<std::string, double> bitcoinData;

public:
    // Constructor
    BitcoinExchange(const std::string& filename);

    // Function to process the input file
    void processInputFile(const std::string& inputFileName);

    // Function to find the closest date in the Bitcoin price data
    std::string findClosestDate(const std::string& targetDate);

    // Function to check input data
    void checkInput(char* filename, const std::map<std::string, float>& data);

    // Function to print a map
    void printMap(const std::map<std::string, float>& map);

    float findRate(const std::string& date, const std::map<std::string, float>& data);
    bool ifValidValue(const std::string& value);
	std::map<std::string, float> readData(const std::string& filename);

    bool ifValidDate(const std::string& date); 
	std::string moveDateBackOneDay(const std::string& date);

};

#endif
