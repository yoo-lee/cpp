#include "HumanA.h"
#include "Weapon.h"

    HumanA(std::string name)
	{
		this -> a_name = name;
	}

    setWeapon(Weapon &weapon)
	{
		weapon = weapon	
	}

	~HumanA()
	{

	}

    setWeapon(Weapon &weapon)
	{
		this -> weapon = &weapon;
	}

    void HumanA::attack()
	{
		if (this -> weapon.getType().empty())
		std::cout << this->b_name << "has no weapon";
		else
		std::cout << this->b_name << "attack with their" << weapon.getType() << std::endl;
	}


// HumanA(std::string name);
// 	~HumanA();
//     void attack();
// HumanA and HumanB are almost the 
// same except for these two tiny details:
// • While HumanA takes the 
// Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.