#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

int main() {
    std::map<std::string, float> csvMap;
    std::map<std::string, float> csvMap2;
    std::map<std::string, float> csvMap3;
    std::string key = "Apple";
    std::string key3 = "Chimpo";
    std::string value = "2.5";
    std::string value2 = "100.00";

    csvMap.insert(std::make_pair(key, std::atof(value.c_str())));
    csvMap3.insert(std::make_pair(key3, std::atof(value2.c_str())));

    // マップの中身を表示
    for (const auto& pair : csvMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    for (const auto& pair : csvMap3) 
	{
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
