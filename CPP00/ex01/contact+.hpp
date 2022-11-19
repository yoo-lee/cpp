#include<iostream>
#include<string>

class Contact
{
    private:
			std::string	firstname;
			std::string	lastname;
			std::string	nickname;
			std::string	phonenumber;
			std::string	darkestsecret;
			void		doFormating(std::string str);
	public:
			void	fillcontact();
			void	printfullContact();
};


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


		void	Contact::fillcontact()
		{
			
		}