#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie zom;
    zom.name = name;
}

// It creates a zombie, name it,
//  and return it so you can use
// it outside of the function
// scope
