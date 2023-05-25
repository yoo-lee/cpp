#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }
    std::string inputFileName = argv[1];

    // Create an instance of BitcoinExchange
    BitcoinExchange exchange("data.csv");

    // Process the input file
    exchange.processInputFile(inputFileName);

    return 0;
}
