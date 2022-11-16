#include <iostream>
#include <iostream>
#include "phonebook.hpp"

class Phonebook
{
	private:
		Phonebook contacts[8];
	public:
		void add();
		void search();
		void printcontact(contract[8]);
	// void search();
};

void	Phonebook::printcontact(contract[8])
{
	std::cout << contract[8] <<std::endl;
}


void Phonebook::addphonebook()
{
	Contact contact;
	contact.fillcontact(); 

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