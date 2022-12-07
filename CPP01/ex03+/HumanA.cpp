#include "HumanA.h"
#include "Weapon.h"

    HumanA(std::string name)
	{
		this -> a_name = name;
	}

	~HumanA()
	{

	}

    setWeapon(Weapon &weapon)
	{
		this -> weapon = &weapon;
	}
    void attack();
	{
		std::cout << name << ""
	}

// HumanA and HumanB are almost the 
// same except for these two tiny details:
// • While HumanA takes the 
// Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.