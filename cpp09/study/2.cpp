#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main(int argc, char *argv[]) {
    std::ifstream file(argv[1]);
    std::map<int, std::string> lines; // std::mapを定義
    int line_number = 1; // 行番号を1から開始
    std::string line;
    while (std::getline(file, line)) {
        lines[line_number] = line; // std::mapに行番号と文字列を格納
        line_number++;
    }
    file.close();

    // std::mapの中身を表示
    for (auto const& [key, val] : lines) {
        std::cout << key << ": "  << std::endl;
        std::cout  << ": " << val << std::endl;
    }

    return 0;
}
