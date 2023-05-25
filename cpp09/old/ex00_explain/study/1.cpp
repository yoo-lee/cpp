#include <iostream>
#include <map>
#include <fstream>

std::map<std::string, double> readData() {
	std::map<std::string, double> _data;
	std::ifstream file("data.csv");
    std::string line;
    // Skip first line
    std::getline(file, line);
    // Read data from file and insert into map
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, rate;
        std::getline(ss, date, ',');
        std::getline(ss, rate, ',');
        _data[date] = std::stod(rate);
    }
	return _data;
}


std::map<std::string, double> readData();

int main() {
    std::map<std::string, double> data = readData();
    for (const auto& [key, value] : data) {
        std::cout << key << ": " << value << std::endl;
    }
    return 0;
}