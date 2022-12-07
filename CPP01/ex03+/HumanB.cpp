#include "HumanB.h"
#include "Weapon.h"

	HumanB::HumanB(std::string name, Weapon &weapon) : weapon(weapon)
	{
		this -> b_name = name;
	}

	void HumanB::attack()
	{
		if (this -> weapon.getType().empty())
		std::cout << this->b_name << "has no weapon";
		else
		std::cout << this->b_name << "attack with their" << weapon.getType() << std::endl;
	}
