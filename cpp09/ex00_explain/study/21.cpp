#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::ifstream file("example.txt");
    std::string line;

    while (std::getline(file, line)) {
		using namespace std;
		// cout << line << endl;
        std::stringstream ss(line);
        std::vector<std::string> tokens;
        std::string token;

        while (ss >> token) {
            tokens.push_back(token);
        }
		cout << "token =" << token.begin() << endl;
		cout << "tokens =" << tokens.end() << endl;

        // // 分割されたトークンの処理
        // for (std::vector<std::string>::const_iterator it = tokens.begin(); it != tokens.end(); ++it) {
        //     std::cout << *it << " ";
        // }
        std::cout << std::endl;
    }

    return 0;
}
