#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main (int ac , char **av)
{
	std::string str; 
	std::string up_str; 
	int i , j;
	i = 1;
	j = 0;
	
	while(i < ac)
	{
	cout << *av << endl;
	*av[i++];
	}
}
