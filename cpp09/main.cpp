#include "BitcoinExchange.hpp"


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " input_file\n";
        return 1;
    }

    BitcoinData bitcoin_data("btc2.csv");
    if (bitcoin_data.get_rate("2009-01-02") == 0.0) {
        std::cerr << "Error: could not load Bitcoin data.\n";
        return 1;
    }

    std::ifstream input_file(argv[1]);
    if (!input_file) {
        std::cerr << "Error: could not open file " << argv[1] << '\n';
        return 1;
    }

    std::string line;
    while (std::getline(input_file, line)) {
        std::istringstream ss(line);
        std::string date_str;
        double value;
        char separator;
        ss >> date_str >> separator >> value;
        if (!ss || separator != '|' || date_str.size() != 10) {
            std::cerr << "Error: bad input => " << line << '\n';
            continue;
        }

        double rate = bitcoin_data.get_rate(date_str);
        if (rate == 0.0) {
            std::cerr << "Error: no Bitcoin rate for " << date_str << '\n';
            continue;
        }

        double result = value * rate;
        if (result <= 0.0 || result > 1000.0) {
            std::cerr << "Error: invalid result => " << result << '\n';
            continue;
        }

        std::cout << date_str << " => " << value << " = " << result << '\n';
    }

    return 0;
}
