#include<iostream>
#include<string>

using namespace std;

char *al(char* s)
{
	for (int i = 'a'; i < 'z' +1, i++;)
	{
		s[i];
		cout << s[i];
	}
	return (s);
}


int main ()
{
	char *s ,*a;
	// char *s *a;
	a = al(s);
	cout << a << endl;
}