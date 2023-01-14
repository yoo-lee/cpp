#include<iostream>
using namespace std;

void Kitty(bool b) 
{
	try {
		if (b) throw 10.1;
		else throw 100;
	}
	catch (double e) { cout << "Exception : " << e << '\n'; }
	catch (...) { cout << "Exception : Kitty()\n"; }
}

int main() {
	// Kitty(true);
	Kitty(false);
	return 0;
}