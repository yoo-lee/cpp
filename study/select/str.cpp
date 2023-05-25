#include <ctype.h>
#include <stdio.h>
#include <iostream>

using namespace std;
int main (int ac, char **av)
{
	const char *m = NULL;
	while (*m)
	{
	// cout << *m << endl; 
	m++;
	std::string str;  //  string 型のオブジェクト str の宣言
	str = toupper(*m);
	cout << str; 
	}
}