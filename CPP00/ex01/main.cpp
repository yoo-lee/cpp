#include <iostream>

int main ()
{
	std::string str;
	Phonebook	phonebook;
	
	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> std::ws;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << '\n';
			std::cin.clear();
			std::clearerr(stdin);
		}
		else if (str == "ADD")
			phonebook.addcontact();
		else 
			std::cout << "command not found\n";
	}
	return(0);
}