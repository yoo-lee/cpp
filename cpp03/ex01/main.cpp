#include "ScavTrap.h"

int	main()
{
	ScavTrap a;
	ScavTrap b;
	ScavTrap c;
	// ScavTrap a(b);
	a = b;
	// a("chim");
	// b("pu");
	std::cout << "Hp: " << a.getHP() << " Ep: " << a.getAD() << " Ad: " << a.getEP() << " Name: " << a.getName() << std::endl;
}

