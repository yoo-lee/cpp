#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead!\n";
<<<<<<< HEAD
}
=======
}
>>>>>>> e67eab0f96fddb79e1bf5666b76a53fdf190c357
