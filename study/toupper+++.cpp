#include <ctype.h>
#include <stdio.h>
#include <iostream>

using namespace std;

 int main (int ac, char **av)
 {
int i , j;
int m[] = {1, 2 ,3};
i = 0;
j =0;
	while(ac < i)
	{
	const char *s = "dfnakl";
	m[j] = toupper(s[i]);
	cout << m[j] << endl;
	i++;
	j++;
	}
}
