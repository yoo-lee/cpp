#include "HumanA.h"
#include "Weapon.h"

    HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
	{
		this -> a_name = name;
	}

	void HumanA::attack()
	{
		if (this -> weapon.getType().empty())
		std::cout << this->a_name << "has no weapon";
		else
		std::cout << this->a_name << "attack with their" << weapon.getType() << std::endl;
	}

// HumanA and HumanB are almost the 
// same except for these two tiny details:
// • While HumanA takes the 
// Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.