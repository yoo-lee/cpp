#include <stdio.h>
#include<string>
#include <ctype.h>

using namespace std;
int main (int ac, char **av)
{
	const char *av = "dfa";
	while (*av)
	{
	// cout << *av << endl; 
	av++;
	std::string str;  //  string 型のオブジェクト str の宣言
	str = toupper(*av);
	cout << str; 
	}
}