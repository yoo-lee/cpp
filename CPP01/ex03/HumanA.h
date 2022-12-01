#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"


class HumanA
{
    private:
    Weapon &weapon;
    std::string a_name;

    public:
    HumanA(std::string name, Weapon &weapon)
    void attack();
};

#endif