#include "Zombie.h"

void randomChump(std ::string name)
{
    Zombie random(name);
    random.announce();
};

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
} 

Zombie::Zombie(std::string name)
{
	this -> name = name;
}