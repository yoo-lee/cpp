#include <iostream>
#include <string>

using namespace std;

class Contact
{
    public:
    int i;
};

class PhoneBook
{
    public:
    int i;
void	PhoneBook::printContact(int i);
    Contact Contact[];
};

void	PhoneBook::printContact(int i)
{
	std::cout << "         " << i << '|';
	Contact[i].printContact();
}

int main ()
{
    PhoneBook obj;
    obj.printContact(2);
    return 0;
}