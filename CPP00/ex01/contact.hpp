#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<string>

class Contact
{
<<<<<<< HEAD
	private:
	std::string c_name;
	std::string first_name;
	std::string nickname;
	std::string darkest_secret;
	int phone_num;

	public:
	int get(std::string name);
=======
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
			void	printinitContact();
>>>>>>> e67eab0f96fddb79e1bf5666b76a53fdf190c357
};
#endif
