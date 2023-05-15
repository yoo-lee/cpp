
#include <vector>
#include <iostream>

using namespace std;
int main ()
{
	// int value = 42;
	// int& ref = value;  // valueへの参照refを作成
	int s = 50;
	int value = 42;
	int b = -5;         // valueの値が24に変更される
	// int& ref = value;  // valueへの参照refを作成
	// int& ref = value;
	int& ref = b;
	ref = 32;
	// cout << ref << " " << value <<  endl;
	cout << b << " "  <<  endl;
}
