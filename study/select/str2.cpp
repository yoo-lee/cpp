#include <stdio.h>
#include <iostream>
#include <ctype.h>


using namespace std;
int n;

int main ()
{
	std::string *str;
	const char *s ="ab";
	int m;
	int i;
	i = 0;

	while(*s)
	{
	n = toupper(s[i]);
	i++;
	str = n;
	str++ ;
	cout << str << endl; 
	}
}