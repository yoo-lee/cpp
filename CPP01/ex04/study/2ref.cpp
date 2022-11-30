#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>


int main()
{
    ifstream ifs("text.txt");

    std::string buf;
    ifs >> buf;
    if (!ifs) {
        std::cerr << "読み込みに失敗" << std::endl;
        std::exit(1);

    std::cout << buf << std::endl;
}
}
