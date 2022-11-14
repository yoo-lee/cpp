#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Zombie
{
	private:

	public:
	// char *new_name;
	string new_name;
};

void show(Zombie x)
{
	cout << x.new_name <<endl;
} 

int main ()
{
	Zombie n_zom;
	n_zom.new_name = "dfah";
	show(n_zom);
	return (0); 
}