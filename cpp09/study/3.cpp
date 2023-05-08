#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

using namespace std;
std::map<std::string, double> readData(const std::string& filename) {
    std::map<std::string, double> _data;
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Unable to open file: " << filename << std::endl;
        return _data;
    }
    std::string line;
    // Skip first line
    std::getline(file, line);
    // Read data from file and insert into map
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, rate;
        std::getline(ss, date, ',');
		// cout << date << endl;
        std::getline(ss, rate, ',');
		// cout << rate << endl;
        _data[date] = std::stod(rate);
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
	
// readData関数は、ファイル名を引数として受け取り、ファイルからデータを読み取って
// std::mapに格納し、そのstd::mapを返します。
// この関数が返したstd::mapを、data変数に格納しています。
    
	for (const auto& entry : data) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    return 0;
}

for (const auto& entry : data)
{
	
}