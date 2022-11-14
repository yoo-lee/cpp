#include<stdio.h>
#include<iostream>
using namespace std;

class student
{
	public:
	int num;
};

void show (student x)
{
	cout << x.num << endl;
}

int main ()
{
	student Yu;
	Yu.num = 10;
	// p = &Yu;
	show(Yu);
}