#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <climits>

// BitcoinExchange class
class BitcoinExchange {
private:
    std::map<std::string, double> bitcoinData;

public:
    // Constructor
    BitcoinExchange(const std::string& filename) {
        bitcoinData = readData(filename);
    }

    // Function to read Bitcoin price data from a CSV file into a map
    std::map<std::string, double> readData(const std::string& filename) {
        std::map<std::string, double> data;
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

    // Function to find the closest date in the Bitcoin price data
    std::string findClosestDate(const std::string& targetDate) {
        std::string closestDate;
        int minDiff = INT_MAX;
        for (const auto& entry : bitcoinData) {
            const std::string& date = entry.first;
            int diff = std::abs(std::stoi(targetDate) - std::stoi(date));
            if (diff < minDiff) {
                minDiff = diff;
                closestDate = date;
            }
        }
        return closestDate;
    }

    // Function to process the input file
    void processInputFile(const std::string& inputFileName) {
        std::ifstream inputFile(inputFileName);
        if (!inputFile) {
            std::cerr << "Error: Failed to open input file." << std::endl;
            exit(1);
        }
        std::string line;
        std::getline(inputFile, line); // Skip the header line
        while (std::getline(inputFile, line)) {
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
                                        double btcValue = std::stod(value);
                    if (btcValue <= 0 || btcValue > 1000) {
                        std::cerr << "Error: Invalid Bitcoin value: " << value << std::endl;
                    } else {
                        // Find the closest date in the Bitcoin data
                        std::string closestDate = findClosestDate(date);
                        if (closestDate.empty()) {
                            std::cerr << "Error: No valid date found in Bitcoin data." << std::endl;
                        } else {
                            // Calculate the Bitcoin value on the closest date
                            double exchangeRate = bitcoinData[closestDate];
                            double result = btcValue * exchangeRate;
                            std::cout << date << " => " << value << " = " << result << std::endl;
                        }
                    }
                } catch (const std::invalid_argument&) {
                    std::cerr << "Error: Invalid value format in the input file." << std::endl;
                }
            }
        }
        inputFile.close();
    }
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " input_file" << std::endl;
        return 1;
    }
    std::string inputFileName = argv[1];

    // Create an instance of BitcoinExchange
    BitcoinExchange exchange("data.csv");

    // Process the input file
    exchange.processInputFile(inputFileName);

    return 0;
}

					
