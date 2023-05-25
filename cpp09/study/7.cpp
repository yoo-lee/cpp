#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>

using namespace std;

std::map<std::string, double> readData(const std::string& filename) {
    std::map<std::string, double> _data;
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error: could not open file." << std::endl;
        return _data;
    }
    std::string line;
    std::getline(file, line);  // Skip first line
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, rate_str, value_str;
        std::getline(ss, date, '|');
        std::getline(ss, value_str, '|');
        std::getline(ss, rate_str, '\n');
        if (value_str.empty() || rate_str.empty()) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        double value;
        try {
            value = std::stod(value_str);
        } catch (const std::exception& e) {
            std::cout << "Error: not a number => " << value_str << std::endl;
            continue;
        }
        double rate;
        auto it = _data.find(date);
        if (it == _data.end()) {
            std::cout << "Error: no exchange rate for date => " << date << std::endl;
            continue;
        }
        rate = it->second;
        if (rate < 0) {
            std::cout << "Error: negative exchange rate => " << rate << std::endl;
            continue;
        }
        if (value < 0) {
            std::cout << "Error: negative value => " << value << std::endl;
            continue;
        }
        if (value > (std::numeric_limits<double>::max() / rate)) {
            std::cout << "Error: value too large => " << value << std::endl;
            continue;
        }
        std::cout << date << " => " << std::fixed << std::setprecision(1) << value << " = " << std::fixed << std::setprecision(2) << (value * rate) << std::endl;
    }
    return _data;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::map<std::string, double> data = readData(filename);
    return 0;
}
