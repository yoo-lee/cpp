#include "Zombie.hpp"

int main ()
{
    Zombie Yoo;
    zombieHorde(5, "yoo");
    return 0;
}

#include "Zombie.hpp"

int main ()
{
	int N = 10;
	Zombie * zom = zombieHorde(N, "Zombie");

	for (int i; i < N; i++)
		zom[i].announce();
	delete [] zom;

}
