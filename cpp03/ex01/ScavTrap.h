#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public  ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);

	~ScavTrap();
	ScavTrap &operator = (const ScavTrap &obj);
	int		getHP();
	int		getEP();
	int		getAD();
	
	std::string getName();
	void guardGate();
};

#endif
// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (50)
// • Attack damage (20)
// ScavTrap will also have its own special capacity:
// void guardGate();
// This member function will display a message informing that ScavTrap is now in Gate
// keeper mode.
// Don’t forget to add more tests to your program.