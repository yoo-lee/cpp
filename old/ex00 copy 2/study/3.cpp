#include <iostream>
using namespace std;

void Chobits(bool b) 
{
	if (b) cout << "Chobits\n";
	else throw "Chobits()";
}

void Kitty(bool b) 
{
	Chobits(b);
}

int main() {
	try { 
		// Kitty(true);
		Kitty(false);
	}
	catch (char *e) 
	{ cout << "Exception : " << e << '\n'; }

	return 0;
}