// #include "ClapTrap.h"
#include "ScavTrap.h"

// 	ScavTrap::ScavTrap( void ): ClapTrap(100, 50, 20, "Default")
// {
// 	std::cout << "Default ScavTrap constructor called" << std::endl;
// }
	ScavTrap::ScavTrap() : ClapTrap(100, 50, 20, "default") 
	{
	std::cout << "Default ScavTrap constructor called" << std::endl;
		// std::cout << "ScavTrap " << this-> _name << " constructor called" << std::endl;
	}
	
	ScavTrap::ScavTrap( std::string name ): ClapTrap(100, 50, 20, name)
	{
		std::cout << " Default ScavTrap constructor called" << std::endl;
	}

	ScavTrap::ScavTrap( const ScavTrap &obj) : ClapTrap(obj.Hitpoints, obj.Energy_points, obj.Attack_damage, obj._name,)
	{
		std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
	}
	
	std::string ScavTrap::getName()
	{
		return(this->_name);
	}
// unsigned int Hit_points;
// 		unsigned int Energy_points;	
// 		unsigned int Attack_damage;	
// 		std::string  _name;

	ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
	{
		if (&obj != this)
		{
			std::cout << " ScavTrap " << obj._name << " copied into" << this->_name << std::endl;
			this->_name = obj._name;
			this->Hit_points = obj.Hit_points;
			this->Attack_damage = obj.Attack_damage;
			this->Energy_points = obj.Energy_points;
		}
		return (*this);
	}

	int		ScavTrap::getHP()
	{
		return (this->Hit_points);
	}
	int		ScavTrap::getEP()
	{
		return (this->Energy_points);

	}
	
	int		ScavTrap::getAD()
	{
		return (this->Attack_damage);
	}
	
	void ScavTrap::guardGate()
	{
	std::cout << this->_name << " ScavTrap is now in Gate keeper mode" << std::endl;
	}

// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (50)
// • Attack damage (20)
// ScavTrap will also have its own special capacity:
// void guardGate();
// This member function will display a message informing that ScavTrap is now in Gate
// keeper mode.
// Don’t forget to add more tests to your program.