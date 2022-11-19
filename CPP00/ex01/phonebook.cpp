
#include "phonebook.hpp"

void	Phonebook::printcontact(contract[8])
{
	std::cout << contract[8] <<std::endl;
}


void Phonebook::addphonebook()
{
	Contact contact;
	contact.fillcontact(); 

	std::cout << phonebook.index << std::endl;
}
// ADD: save a new contact
// ◦ If the user enters this command, they are prompted to input the information
// of the new contact one field at a time. Once all the fields have been completed,
// add the contact to the phonebook.
// ◦ The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.

void	Phonebook::addContact()
{
	Contact new_contact;
	contact.fillContact();
	contact.new_contact[last] = contact;
	// while(last < 9)
	// {
	// 	last++
	// }
}

void Phonebook::PhoneBook()
{
	Phonebook::addContact();
	std::cout<< PhoneBook.index <<std::endl;
	std::cout<< PhoneBook.name <<std::endl;
}

// void Phonebook::search()
// {
// 	Phonebook phonebook;
// 	std::cout << phonebook.index << std::endl;
// 	std::cout << phonebook.name << std::endl;
// 	std::cout << phonebook.family_name << std::endl;
// 	std::cout << phonebook.nickname << std::endl;
// }
