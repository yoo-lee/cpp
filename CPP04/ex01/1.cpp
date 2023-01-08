#include <iostream>
using namespace std;

int main() {
	try {
		throw "1";
		cout << "Di Gi Gharat";
	}
	catch (int e) { cout << e; }
	cout << "not 1";

	return 0;
}