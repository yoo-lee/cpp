#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
    private:
    Weapon *weapon;
    std::string a_name;

    public:
	HumanB(std::string name);
	~HumanB();
    setWeapon(Weapon &weapon);
    void attack();
};
#endif