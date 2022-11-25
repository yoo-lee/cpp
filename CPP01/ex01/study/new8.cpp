#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main 
{
    char *y;
    char *s;

    y = new char;
    s = &y;
    cout << s << endl;
}