#include <iostream>
#include <stdio.h>
#include <ctype.h>

std::string str;  //  string 型のオブジェクト str の宣言
using namespace std;

int main (int ac, char **m)
{
	cout << *m << endl;
	cout << str = toupper(*m);
}
