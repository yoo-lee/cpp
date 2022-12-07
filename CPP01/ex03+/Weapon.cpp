#include "Weapon.h"

const std::string &Weapon::getType()
{
	return (this -> type);
}

Weapon::Weapon(std::string type)
{
	type = type;
}

void	Weapon::setType(std::string type)
{
	type = type;
}