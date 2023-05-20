#include <iostream>


std::string moveDateBackOneDay(const std::string& date) {
    int year, month, day;
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

    int prev_day = day - 1;
    int prev_month = month;
    int prev_year = year;

    if (prev_day == 0) {
        prev_month = month - 1;
        if (prev_month == 0) {
            prev_month = 12;
            prev_year = year - 1;
            if (prev_year < 2009) {
                return "not valid date";
            }
        }

        if (prev_month == 2) {
            bool leap_year = ((prev_year % 4 == 0) && (prev_year % 100 != 0)) || (prev_year % 400 == 0);
            prev_day = leap_year ? 29 : 28;
        } else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
            prev_day = 30;
        } else {
            prev_day = 31;
        }
    }

    std::string prev_date = std::to_string(prev_year) + "-";
    if (prev_month < 10)
        prev_date += "0" + std::to_string(prev_month);
    else
        prev_date += std::to_string(prev_month);
    if (prev_day < 10)
        prev_date += "-0" + std::to_string(prev_day);
    else
        prev_date += "-" + std::to_string(prev_day);

    return prev_date;
}

double findRate(std::string date, std::map<std::string, double> data) {
	std::map<std::string, double>::iterator it = data.find(date);
    if (it != data.end()) 
	{
        return it->second;
    } else 
	{
        std::string previousDay = moveDateBackOneDay(date);
        if (previousDay.compare("not valid date"))
            return 0;
        return findRate(previousDay, data);
    }
}

int main() {
    std::map<std::string, double> data = {
        {"2023-05-15", 0.5},
        {"2023-05-16", 0.7},
        {"2023-05-17", 0.9},
        // 他の日付と値の組み合わせを追加
    };

    std::string date = "2023-05-17";
    double rate = findRate(date, data);

    std::cout << "Rate for " << date << ": " << rate << std::endl;

    return 0;
}
