#include <iostream>
#include <iostream>

class Phonebook
{	
	void add();
	// void search();
	void print();
};

void	Phonebook++printcontact()
{
	
}

class Contact
{
	public:
	int index;
	int phonenum;
	const char *name;
	char family_name;
	char nickname;
	char secret;

};

void Phonebook::add()
{
	Phonebook phonebook;

	phonebook.index = 10;
	std::cout << phonebook.index << std::endl;
	phonebook.name = "ddfad";
}

void Phonebook::print()
{
	Phonebook phonebook;
	Phonebook::add();
	phonebook.index = 0;
	phonebook.name = "dfa";
	std::cout<< phonebook.index <<std::endl;
	std::cout<< phonebook.name <<std::endl;
}

// void Phonebook::search()
// {
// 	Phonebook phonebook;
// 	std::cout << phonebook.index << std::endl;
// 	std::cout << phonebook.name << std::endl;
// 	std::cout << phonebook.family_name << std::endl;
// 	std::cout << phonebook.nickname << std::endl;
// }


int main ()
{
	std::string str;
	Phonebook phonebook;

	while (1)
	{
	// if(str == "ADD")
	// 	phonebook.add();
	// else if(str == "SEARCH")
	// 	phonebook.search();
	// else if (str == "EXIT")
	// 	break;
	// else
	// phonebook.add();
	phonebook.print();
	std::cout << "Error" << std::endl;
	}
	return 0;
}