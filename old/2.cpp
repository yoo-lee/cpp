#include<stdio.h>
#include<iostream>
using namespace std;

bool g(int *i)
{
	if(*i)
	return(i);
	else
	{
		throw 
	cerr << "Wrong" <<endl;
	return(0);
	}
}

bool f(int *i)
{
	cout << "f" <<endl;
	g(i);
}

int main ()
{
	int n;
	cin >> n;
	f(&n);
	cout << f(&n) << endl;
}