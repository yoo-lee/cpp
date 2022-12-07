#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
    private:
    	Weapon &weapon;
    	std::string b_name;

    public:
    	HumanB();
    	~HumanB();
    	HumanB(std::string name, Weapon &weapon);
    	void attack();
};

#endif