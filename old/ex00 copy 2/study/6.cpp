#include <stdio.h>
#include <iostream>

using namespace std;
int f(bool b)
{
	throw(1);
	return(1);
}

int main ()
{
	int j; 
	cin >> j;
	// f(j);
	try
	{
	f(1);
	}
	catch(int j)
	{
		cout << "1";
	}
}