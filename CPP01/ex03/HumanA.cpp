#include "HumanA.h"

    HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
    {
        this -> a_name = name;
    }

    void HumanA::attack()git o
    {
        if (this -> weapon.getType().empty())
        std::cout << this->name << "has no weapon"
    }

// HumanA and HumanB are almost the 
// same except for these two tiny details:
// • While HumanA takes the 
// Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.