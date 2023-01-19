#include<stdio.h>


#include <iostream>
using namespace std;

int main() {
	try {
		throw 1;
		cout << "Di Gi Gharat";
	}
	catch (int e) { cout << e; }
	cout << "Kitty on your lap";

	return 0;
}

bool f(int i)
{
	if(i%2)
	return(true);
	else
	return(false);
}

// int main ()
// {
// 	f(10);
// }