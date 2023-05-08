#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <regex>

using namespace std;

map<string, double> readData(const string& filename) {
    map<string, double> data;

    ifstream input(filename);
    if (!input) {
        cerr << "Error: could not open file." << endl;
        return data;
    }

    string line;
    getline(input, line); // Skip the header line

    while (getline(input, line)) {
        // Split the line into fields using regular expressions
        smatch match;
        regex pattern("^([\\d\\-]+),([\\d\\.]+)$");
        if (!regex_match(line, match, pattern)) {
            cerr << "Error: bad input => " << line << endl;
            continue;
        }

        // Extract the date and rate
        string date = match[1];
        double rate;
        try {
            rate = stod(match[2]);
        } catch (invalid_argument& e) {
            cerr << "Error: not a number => " << match[2] << endl;
            continue;
        }

        // Check that the rate is positive
        if (rate <= 0.0) {
            cerr << "Error: not a positive number." << endl;
            continue;
        }

        // Add the date and rate to the map
        auto result = data.emplace(date, rate);
        if (!result.second) {
            cerr << "Error: duplicate date => " << date << endl;
        }
    }

    return data;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    string filename = argv[1];
    map<string, double> data = readData(filename);

    for (const auto& entry : data) {
        cout << entry.first << " => " << entry.second << endl;
    }

    return 0;
}
