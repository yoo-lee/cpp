#include <iostream>
#include <fstream>

int main()
{
    const char *fileName = "text.txt";
    getline(text.txt, line);
    std::ofstream ofs(fileName);
    ofs << "あいうえお　かきくけこ" << std::endl;
    std::cout << fileName << "に書き込みました。" << std::endl;

    std::cin.get();
}