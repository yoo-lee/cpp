#include <cstring>
#include <iostream>
#include <string>

using namespace std;


void	Zombie::setzombiename(std::string name)
{
	z_name = name;
}

Zombie::Zombie(string name)
{
	z_name = name;
}

void announce(std::string name)
{
	cout << z_name << endl;
}

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zom = new Zombie[N];

	for( int i = 0; i < N; ++i)
	{
		zom[i].setZombiename(std::string name);
	}
	return (zom);
}


// It must allocate N Zombie objects in a single allocation.
//  Then, it has to initialize the
// zombies, giving each one of them
//  the name passed as parameter.
//  The function returns a
// pointer to the first zombie.
// Implement your own tests to ensure your zombieHorde() 
// function works as expected.
// Try to call announce() for each one of the zombies.