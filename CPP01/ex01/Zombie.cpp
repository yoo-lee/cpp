#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *z = new Zombie[N];;
    int i;
    for(i = 0; i < N; i++)
    {
    z[i] = Zombie();
    z[i].setZombieName(name);
    z[i].announce();
    }
    return (z);
}

void Zombie::announce()
{
	std::cout << z_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setZombieName(std::string name)
{
    z_name = name;
}
			Zombie::Zombie()
            {
                std::cout << z_name << "appear" << std::endl;
            }

			Zombie::~Zombie()
            {
                std::cout << z_name << " is dead" << std::endl;
            }
