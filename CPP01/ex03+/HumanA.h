#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
    private:
    Weapon *weapon;
    std::string a_name;

    public:
	HumanA(std::string name);
	~HumanA();
    setWeapon(Weapon &weapon);
    void attack();
};

#endif