#include <iostream>

void f(int i,int j, int *k, int *s)
{
	*k = i + j;
	*s = i - j;
}

using namespace std;
int main ()
{
	int i,j;
	int k,s;
	// k = 10;
	// s = 10;
	f(10, 10, &s ,&k);
	cout << s << "\n"<< k <<endl;
}