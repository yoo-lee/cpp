#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <stdlib.h> 
#include <string> 


using namespace std;
int n;

int main ()
{
	std::string *str;
	const char *s ="ab";
	int m;
	int i;
	int n;
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