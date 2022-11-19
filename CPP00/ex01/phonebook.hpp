#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

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
};

#endif
