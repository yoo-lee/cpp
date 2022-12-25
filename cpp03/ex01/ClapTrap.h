#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

	class ClapTrap
	{
	protected:
		unsigned int Hit_points;
		unsigned int Energy_points;	
		unsigned int Attack_damage;	
		std::string  _name;
	public:
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap &operator=(const ClapTrap &obj);

	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
 	void takeDamage(unsigned int amount);
 	void beRepaired(unsigned int amount);
};

#endif