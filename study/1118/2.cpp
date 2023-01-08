#include <iostream>
#include <stdlib.h>

using namespace std;

int* newt(int &n, int t)
{
	int *s;
	int i = 0;
	while(i <n)
	{
	s = new int(n);
	// s++;
	i++;
	}
	return(s);
}

int main ()
{
	// int buf = 100;
	int s = 10000; 
	int *p;
	p = newt(s, 100000);
	// int *s = new int(1000);

	cout << *p << endl;
	// cout << "s\n";
	system("leaks -q ./a.out");
	return 0;
}