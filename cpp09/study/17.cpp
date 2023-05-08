#include <vector>
#include <map>
#include <iostream>
using namespace std;

int main ()
{
	vector <int> vec = {1, 2 ,3};
	for (int i = 0; i < vec.size(); i++) 
	cout << vec[i] << "";
	map <int, int> m;
	for (int i = 1; i <= 5; i++)
	{
		m[i] = i;
	}

	for (auto x: m)
	{
	cout << x.first << ":" << x.second << endl;
	}
	return 0;
	
}