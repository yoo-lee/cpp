#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "BitcoinExchange.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }
    
    string input_file = argv[1];
    ifstream infile(input_file);
    
    if (!infile) {
        cerr << "Error: Could not open file " << input_file << endl;
        return 1;
    }
    
    map<string, double> btc_data;
    string line;
    
    while (getline(infile, line)) {
        string date = line.substr(0, line.find('|'));
        string value = line.substr(line.find('|')+1);
        
        try {
            double btc_value = stod(value);
            btc_data[date] = btc_value;
        } catch (invalid_argument&) {
            cerr << "Error: Invalid value on line \"" << line << "\"" << endl;
            return 1;
        } catch (out_of_range&) {
            cerr << "Error: Value out of range on line \"" << line << "\"" << endl;
            return 1;
        }
    }
    BitcoinExchange exchange(argv[1]);
	exchange.printData();

    // Output the btc data
    for (auto& kv : btc_data) {
        cout << kv.first << " => " << kv.second << endl;
    }
    
    return 0;
}
