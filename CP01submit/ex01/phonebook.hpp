#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include<iostream>
#include<string>
#include <cstdio>

class PhoneBook
{
	private:
			Contact	contact[8];
			int		length;
			int		last;
	public:
			PhoneBook();
			void	printContact(int i);
			void	printPhoneBook();
			void	searchContact();
			void	addContact();
			void 	addphonebook();

};

#endif
