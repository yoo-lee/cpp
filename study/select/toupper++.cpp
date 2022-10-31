#include <ctype.h>
#include <stdio.h>
#include <iostream>

using namespace std;
 int main ()
 {
	const char *s = "dfnakl";
	int i , j;
	int m[] = {1, 2 ,3};
	i = 0;
	j = 0;

	while(*s)
	{
		m[j] = toupper(s[i]);
		cout << s[i] << endl;
		cout << m[j] << endl;
		i++;
		j++;
	}
}
