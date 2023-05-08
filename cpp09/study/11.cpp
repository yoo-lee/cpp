#include <iostream>
#include <map>

double findRate(std::string date, std::map<std::string, double> data) {
    std::map<std::string, double>::iterator it = data.find(date);
    if (it != data.end()) {
        return it->second;
    } else {
        std::string previousDay = moveDateBackOneDay(date);
        if (previousDay.compare("not valid date")) return 0;
        return findRate(previousDay, data);
    }
}

int main() {
    std::map<std::string, double> data = {{"2022-01-01", 1.0}, {"2022-01-02", 2.0}, {"2022-01-03", 3.0}};
    std::string date = "2022-01-04";
    double rate = findRate(date, data);
    std::cout << "Rate for " << date << " is " << rate << std::endl;
    return 0;
}