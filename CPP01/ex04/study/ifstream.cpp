#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
    std::ifstream ifs(av[1]);
    if (ifs.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return -1;
    }
    std::ofstream ofs(av[2]);
    if (ofs.fail()) {
        std::cerr << "Failed to copy file." << std::endl;
        return -1;
    }
    
    std::string str, str2;

    while (getline(ifs, str)) 
    {
        std::cout << str << std::endl;
        str2 = str;
    }
    return 0;
}