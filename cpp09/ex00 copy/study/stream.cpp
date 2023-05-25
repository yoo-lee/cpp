#include <sstream>
#include <iostream>

int main() {
    std::string line = "Hello, World!";
    std::string line2 = "Hello, chimpo!";
    std::stringstream ss(line);
    std::stringstream ss2(line2);

    std::string word, word2;
    ss >> word;   // "Hello"がwordに格納される
    ss2 >> word2; // "Hello"がword2に格納される

    ss << "Welcome!"; // "Hello, World!Welcome!"となる
    ss2 << "manko";

    std::cout << ss.str() << std::endl;  // "Hello, World!Welcome!"が出力される
    std::cout << ss2.str() << std::endl; // "Hello, chimpo!manko"が出力される

    return 0;
}
