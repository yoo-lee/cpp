#pragma once

#include <string>
#include <map>

class BitcoinExchange {
public:
    void printData() const;
    double get_rate(const std::string& date) const;
    BitcoinExchange(const std::string& filename);

private:
    std::unordered_map<std::string, double> bitcoin_rates;
};
