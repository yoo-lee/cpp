#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>

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
#endif
