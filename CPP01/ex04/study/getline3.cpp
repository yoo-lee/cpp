#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
    ifstream file("text.txt");
    string line;
    while(getline(file, line))
    {
        cout << line << endl;
    }
}