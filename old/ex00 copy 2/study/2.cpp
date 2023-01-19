#include <iostream>
using namespace std;

int main() 
{
	int i;
	cout << "0 or 1>";
	cin >> i;

	try {
		if (i) throw "Kitty on your lap";
		else throw 100;
	}
	catch (char *e) { cout << "Exception : " << e << '\n'; }
	catch (int e) { cout << "Exception : " << e << '\n'; }
	return 0;
}