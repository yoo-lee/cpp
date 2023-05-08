#include <iostream>
#include <fstream>
#include <string>
#include <map>


// std::map<std::string, double> readData() {
// std::map<std::string, double> _data;
// std::ifstream file("data.csv");
// std::string line;

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
	 
int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
			readData();
        }
        file.close();
    } else {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        return 1;
    }
    return 0;
}
