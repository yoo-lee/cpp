#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *z = new Zombie(name);
    return (z);
}

// It creates a zombie, name it,
//  and return it so you can use
// it outside of the function
// scope
