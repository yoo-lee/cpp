#include <iostream>

using namespace std;
int main ()
{
	char *s1;
	char *s2;
	char *s3;
	char s[2];
	
	s = new char(10);
	s1 = new char;
	s3 = new char[3];

	s1 = "fjdoao";
	s2 = "dfa";
	s3 = "abcdefg hijklmn";
	
	cout << s1 << '\n';
	cout << s2 << '\n';
	cout << s3 << '\n';
}