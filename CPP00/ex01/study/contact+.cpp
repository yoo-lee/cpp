#include<iostream>
#include<string>

class Contact
{
    private:
			int index;
			std::string	firstname;
			std::string	lastname;
			std::string	nickname;
			std::string	phonenumber;
			std::string	darkestsecret;
	public:
			Contact();
			void	printfullContact();
};

		void	Contact::contact()
		{
			std::string	firstname;
			std::string	lastname;
			std::string	nickname;
			std::string	phonenumber;
			std::string	darkestsecret;
		}

		void	Contct::printfullContact()
		{
			cout
				<< index
				<< firstname;
				<<lastname;
				<<nickname;
				<<phonenumber;
				<<darkestsecret
				<<endl;
		}

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


// Each column must be 10 characters wide. A pipe character (’|’) separates
// them. The text must be right-aligned. If the text is longer than the column,
// it must be truncated and the last displayable character must be replaced by a
// dot (’.’).

Contact::Contact(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << str;
	std::cout << '|';
}

			void	printContact(int i)
			{
				cout << index << '|'<<
			 		 << first name <<'|'<<
					 << last name <<'|'<<
					<< nickname <<
					<< endl;
			}

			void	printPhoneBook()
			{
				cout << length <<endl;
				cout << last <<endl;
			}
			// Display the saved contacts as a list of 4 columns: index,
			//  first name, last
// name and nickname.
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


// ADD: save a new contact
// ◦ If the user enters this command,
//  they are prompted to input the information
// of the new contact one field at a time.
//  Once all the fields have been completed,
// add the contact to the phonebook.
// ◦ The contact fields are: first name, last name, nickname, p
