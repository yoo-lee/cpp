#include <iostream>

using namespace std;
int main ()
{
	int p = 1;
	int &a = p;
	// &a = p;
	cout << a << endl;
	cout << p << endl;
}