#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
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
    for (const auto& p : data) {
        std::cout << p.first << ": " << p.second << std::endl;
    }
    return 0;
}
