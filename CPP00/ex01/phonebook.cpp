
#include "phonebook.hpp"

void	Phonebook::printcontact(contract[8])
{
	std::cout << contract[8] <<std::endl;
}

<<<<<<< HEAD
// SEARCH: display a specific contact
// ◦ Display the saved contacts as a list of 4 columns:
//  index, first name, last
// name and nickname.
// ◦ Each column must be 10 characters wide.
// A pipe character (’|’) separates
// them. The text must be right-aligned.
//  If the text is longer than the column,
// it must be truncated and the last displayable
//  character must be replaced by a
// dot (’.’).
// ◦ Then, prompt the user again for the index of the entry to display. If the index
// is out of range or wrong, define a relevant behavior. Otherwise, display the
// contact information, one field per line
void	printContact()
{
	contact contact;
 	cout << contact.index << '|'
		 << contact.first name << '|'
		 << contact.last name  << '|'
		 << contact.nickname   << '|'
		 <<endl;
}
void	searchContact()
{
}


void Phonebook::searchContact()
{
=======

void Phonebook::addphonebook()
{
	Contact contact;
	contact.fillcontact(); 

>>>>>>> e67eab0f96fddb79e1bf5666b76a53fdf190c357
	std::cout << phonebook.index << std::endl;
	phonebook.name = "ddfad";
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

void Phonebook::print()
{
	Phonebook phonebook;
	Phonebook::add();
	phonebook.index = 0;
	phonebook.name = "dfa";
	std::cout<< phonebook.index <<std::endl;
	std::cout<< phonebook.name <<std::endl;
}
<<<<<<< HEAD
=======

// void Phonebook::search()
// {
// 	Phonebook phonebook;
// 	std::cout << phonebook.index << std::endl;
// 	std::cout << phonebook.name << std::endl;
// 	std::cout << phonebook.family_name << std::endl;
// 	std::cout << phonebook.nickname << std::endl;
// }
>>>>>>> e67eab0f96fddb79e1bf5666b76a53fdf190c357
