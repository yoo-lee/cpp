#include "ClapTrap.h"

int	main()
{
	ClapTrap yoo("Yoo");
	ClapTrap lee("Lee");
	ClapTrap Yuri;
	Yuri = yoo;

	yoo.attack("Lee");
	lee.takeDamage(0);
	lee.takeDamage(1);
	lee.attack("Me");
	lee.beRepaired(2);
	lee.takeDamage(10);
	yoo.attack("Yuri");
}

// When ClapTrack attacks, it causes its 
// target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back.
//  Attacking and repairing
// cost 1 energy point each. Of course, 
// ClapTrap can’t do anything if it has no hit points
// or energy points left.
// In all of these member functions, 
// you have to print a message to describe what happens. For example, the attack() function may display something like (of course, without
// the angle brackets):
// ClapTrap <name> attacks <target>, causing <damage> points of damage!
// The constructors and destructor must also display a message, so your peer-evaluators
// can easily see they have been called.
// Implement and turn in your own tests to ensure your code works as expected.
