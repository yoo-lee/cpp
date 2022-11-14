// #include "Zombie.h"
#include <iostream>

// It has a string private attribute name.
// Add a member function void announce( void ); to the Zombie class. Zombies
// announce themselves as follows:
// <name>: BraiiiiiiinnnzzzZ...
class Zombie
{
	public:
	std::string name;
	// void randomChump(std::string name);
	Zombie* zombieHorde( int N, std::string name);
	void randomChump( std::string name);
};

// void randomChump( std::string name );
// It creates a zombie, name it, and the zombie announces itself.

void randomChump(std::string name)
{
	Zombie random(name);
	std::cout << name << std::endl;
}

void randomChump(std ::string name)
{
    Zombie random(name);
    random.announce();
};


// Zombie* newZombie( std::string name );
// It creates a zombie, name it, and return it so you can use it outside of the function
// scope.
Zombie* zombieHorde(int N, std::string name)
{
	return (new Zombie(name));
}

int main ()
{
	randomChump();
}