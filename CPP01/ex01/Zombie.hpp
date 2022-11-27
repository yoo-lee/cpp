#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
			std::string	z_name;
	public:
			Zombie();
			Zombie(std::string name);
			void announce();
			void setZombieName(std::string name);
			~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
