#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class Zombie
{
	private:
		string z_name;
	public:
		Zombie();
		Zombie(string name);
		Zombie* zombieHorde( int N, std::string name );
		~Zombie();
};

Zombie::Zombie(string name)
{
	z_name = name;
}

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new Zombie[N];

	for( int i = 0; i < N; ++i)
	{
		
	}
	Zombie (name);
	zombieHorde[i].setZombieName(name + '_' + string) = new char(N);
	return (zom);
}

int main ()
{
	

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