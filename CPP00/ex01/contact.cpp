#include <iostream>

class Contact
{
	private:
	std::string c_name;
	std::string first_name;
	std::string nickname;
	std::string darkest_secret;	
	int phone_num;

	public:
	int get(std::string name);
};

void Contact::get(std::string name)
{
	Contact c_name;
	c_name = name;
} 

int main ()
{
	Contact new;
	new.get("hfdoa");
	std::cout << new.c_name << std::endl;
}
