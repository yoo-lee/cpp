#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
std::string str = "123";
std::istringstream iss(str);
int num;
char s;
iss >> s;
iss >> num; // issから整数を読み込む
cout << "num ="<< num << endl;
cout << "s =" <<s << endl;
}
