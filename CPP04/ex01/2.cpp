
#include <cstdint>
#include <stdio.h>
#include <iostream>
#define A 5
using namespace std;
int main ()
{
	int a[A] = {1,2,3,4,5};
	int *i;
	for (i = a; i  < a+5 ; i++)
	{
		cout << *i << endl;;
	}

}

	for (i = a; 0 < i && i < a+5 ; i--)
	{
		cout << *i << endl;;
	}