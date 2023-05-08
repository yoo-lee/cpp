#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <vector>

// Bitcoinデータを読み込むクラス
class BitcoinData {
public:
    BitcoinData(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Error: could not open file " << filename << '\n';
            return;
        }
        std::string line;
        std::getline(file, line); // ヘッダ行を読み飛ばす
        while (std::getline(file, line)) {
            std::istringstream ss(line);
            std::string date;
            double rate;
            ss >> date >> rate;
            if (!ss || date.empty() || rate < 0) {
                std::cerr << "Error: bad input => " << line << '\n';
                continue;
            }
            bitcoin_rates[date] = rate;
        }
    }

    double get_rate(const std::string& date) const {
        auto it = bitcoin_rates.find(date);
        if (it == bitcoin_rates.end()) {
            return 0.0;
        }
        return it->second;
    }

private:
    std::unordered_map<std::string, double> bitcoin_rates;
};
