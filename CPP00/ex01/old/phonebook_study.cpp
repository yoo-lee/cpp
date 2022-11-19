#include "contact.hpp"

class Phonebook
{
    private:
        Contact[8];
    public:
    Phonebook()
void	printContact(int i);
// void	printPhoneBook();
};

void	PhoneBook::printContact(int i)
{
	std::cout << "         " << i << '|';
	Contact[i].Phonebook();
}

// void	Phonebook::printPhoneBook()
// {
// 	Phonebook phonebook;
// 	phonebook.printContact();
// }

int main ()
{
    Phonebook phone;
    phone.printContact(1);
}
