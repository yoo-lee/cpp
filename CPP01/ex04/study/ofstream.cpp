#include <fstream>
#include <string>
using namespace std;

// int main(int argc, char *av[])
// {
//     std::ofstream o_file;
//     std::string filename = av[1];
//     o_file.open(filename, std::ios::out);
//     std::string text;
//     o_file << text <<std::endl;
//     o_file.close();
//     return 0;    }

// int main(int argc, char *av[])
// {
//     std::ofstream file;
//     std::string filename = av[1];
//     file.open(filename);
//     string text;
//     file << text << endl;
//     file.close();
//     return 0;
// }

// int main(int argc, char *av[])
// {
//     ofstream file;
//     string filename = av[1];
//     file.open(filename);
//     string text;
//     file  << text <<endl;
//     return (0);
// }

int main(int argc, char *av[])
{
    ofstream file;
    string txt;
    string filename = av[1];
    file.open(filename);
    string text;
    file << text << endl;
    return (0);
}