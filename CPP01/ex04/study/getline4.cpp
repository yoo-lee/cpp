#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[] ) 
{
    ifstream file(argv[1]);
    int line_num = 1;
    string line;
        while (getline(file, line))
        {
            cout << line_num << line << endl;
            line_num += 1;
        }
}