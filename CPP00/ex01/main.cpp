
#include <iostream>

int main ()
{
	std::string str;
	Phonebook	phonebook;
	
	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> std::ws;
	}
    if (std::cin.eof())
	{
		std::cout << '\n';
	}
	return(0);
} 
   



}