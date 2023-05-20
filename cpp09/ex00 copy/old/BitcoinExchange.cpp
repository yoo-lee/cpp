#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>


std::map<std::string, float> BitcoinExchange::readData(const std::string& filename) {
        std::map<std::string, float> data;
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Error: Failed to open file." << std::endl;
            exit(1);
        }
        std::string line;
        std::getline(file, line); // Skip the header line
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string date, value;
            std::getline(ss, date, '|');
            std::getline(ss, value, '|');
            date.erase(0, date.find_first_not_of(' ')); // Remove leading spaces
            date.erase(date.find_last_not_of(' ') + 1); // Remove trailing spaces
            value.erase(0, value.find_first_not_of(' ')); // Remove leading spaces
            value.erase(value.find_last_not_of(' ') + 1); // Remove trailing spaces
            if (!date.empty() && !value.empty()) {
                try {
                    data[date] = std::stod(value);
                } catch (const std::invalid_argument&) {
                    std::cerr << "Error: Invalid value format in the file." << std::endl;
                    exit(1);
                }
            }
        }
        file.close();
        return data;
    }


bool BitcoinExchange::ifValidDate(const std::string& date) 
{
    if (date.length() != 10) {
        return false;
    }
    int year, month, day;
    char separator1, separator2;
    std::istringstream ss(date);
    ss >> year >> separator1 >> month >> separator2 >> day;
    if (ss.fail() || separator1 != '-' || separator2 != '-' ||
        year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if ((month == 2 && (leap_year ? day > 29 : day > 28)) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
        return false;
    }

    return true;
}

bool BitcoinExchange::ifValidValue(const std::string& value) {
    try {
        std::stof(value);
    } catch (const std::invalid_argument& e) {
        return false;
    }
    return true;
}

std::string BitcoinExchange::moveDateBackOneDay(const std::string& date)
{
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


float BitcoinExchange::findRate(const std::string& date, const std::map<std::string, float>& data)
{
    std::map<std::string, float>::const_iterator it = data.find(date);
    if (it != data.end()) {
        return it->second;
    } else {
        std::string previousDay = moveDateBackOneDay(date);
        if (previousDay.compare("not valid date") != 0) {
            return findRate(previousDay, data);
        } else {
            return 0;
        }
    }
}

void BitcoinExchange::checkInput(char* file, const std::map<std::string, float>& data) 
{
    std::ifstream inputFile(file);
    if (!inputFile) {
        std::cerr << "Error: Failed to open file." << std::endl;
        exit(1);
    }

    std::string firstLine;
    std::getline(inputFile, firstLine);
    if (firstLine.compare("date | value") != 0) {
        std::cerr << "Error: First line of file is not 'date | value'." << std::endl;
        exit(1);
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string date;
        std::string value;
        char separator;

        if (!(iss >> date >> separator >> value) || separator != '|') {
            std::cout << "Error: bad input => " << date << std::endl;
        } else if (!ifValidDate(date) || !ifValidValue(value)) {
            std::cout << "Error: bad input => " << date << std::endl;
        } else if (stof(value) < 0) {
            std::cout << "Error: not a positive number." << std::endl;
        } else if (stof(value) > 1000) {
            std::cout << "Error: too large a number." << std::endl;
        } else {
            float mult = stof(value) * findRate(date, data);
            std::cout << date << " => " << value << " = " << mult << std::endl;
        }
    }
    inputFile.close();
}


void BitcoinExchange::printMap(const std::map<std::string, float>& map)
{
    std::map<std::string, float>::const_iterator it;
    for (it = map.begin(); it != map.end(); ++it) {
        std::cout << it->first << "=" << it->second << " ";
    }
    std::cout << std::endl;
}

