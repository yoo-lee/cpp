
#include "phonebook.hpp"

void	PhoneBook::printContact(int i)
{
	std::cout << "         " << i << '|';
	contact[i].printFormatedContact();
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

	void	searchContact()
		{
			printContact();
			contact.fillcontact();
		std::cout << phonebook.index << std::endl;
		}


void	addContact()
{
		fillcontact();
		contact.new_contact[last] = contact;
		this->contact[last] = contact;
	last++;
	if (last == 8)
		last = 0;
	if (length < 8)
		length++;
}

void Phonebook::PhoneBook()
{
	Phonebook::addContact();
	std::cout<< PhoneBook.index <<std::endl;
	std::cout<< PhoneBook.name <<std::endl;
}
