#include "zombie.hpp"

// class Zombie
// {
// 	private:
// 			std::string	name;
// 	public:
// 			void announce();
// 			void setZombieName(std::string name);
// 			Zombie(std::string name);
// 			Zombie();
// 			~Zombie();
// Zombie* zombieHorde(int N, std::string name);
// };

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::setZombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead!\n";
}

Zombie::Zombie()
{
	std::cout << "<default> BraiiiiiiinnnzzzZ...\n";
}

// Zombie* zombieHorde(int N, std::string name)
// {
// 	Zombie *zombieHorde = new Zombie[N];

// 	for (int i = 0; i < N; ++i)
// 		zombieHorde[i].setZombieName(name + '_' + std::to_string(i));
// 	return (zombieHorde);
// }

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setzombie(name);
    }
    return(zombies);
}

// int main(void)
// {
// 	int N = 10;
// 	Zombie* zombies = zombieHorde(N,"Zombie");

// 	for (int i = 0; i < N; i++)
// 		zombies[i].announce();
// 	delete[] zombies;
// 	return (0);
// }

int main ()
{
    int N = 10;
    Zombie *zombie = zombie(N, "Zombie");

	for (int i = 0; i < N; i++)
        zombie[i].announce();
    return (0);
}
