#include<iostream>
#include<string>
#include <ctype.h>

using namespace std;
int main (int ac, char **av)
{
	printf("1");
	int i, j;
	char n[] = "Damnit" " ! " "Sorry students, I thought this thing was off.";
	char m[j];
	char s;
	// char *m = "cd";
	i = 0;
	j = 0;
	while(ac < i)
	{
		// int n = (char *)n;
		// cout << n << endl;
		cout << n[i] <<endl;
		s = (char)toupper(n[i]);
		m[j] = s;
		cout << m[j];
		i++;
		j++;
	}
}
	// cout << m << endl;
