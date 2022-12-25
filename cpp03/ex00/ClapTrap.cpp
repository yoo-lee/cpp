#include "ClapTrap.h"

	ClapTrap& ClapTrap:: operator=(const ClapTrap &obj)
	{
		if (&obj != this)
		{
		std::cout << "ClapTrap" << obj._name << "copied into" << this->_name << std::endl;
		this-> _name = obj._name;
		this-> Attack_damage = obj.Attack_damage;
		this-> Energy_points = obj.Energy_points;
		this-> Hit_points = obj.Hit_points;
		}
		return (*this);
	}
	

	ClapTrap::ClapTrap(const ClapTrap &obj): _name(obj._name),
		Hit_points(obj.Hit_points),
		Energy_points(obj.Energy_points),
		Attack_damage(obj.Attack_damage)
	{
		std::cout << "ClapTrap copied" << obj._name << "constructor called" << std::endl;
	}

	ClapTrap::ClapTrap(std::string name):
		Hit_points(10),
		Energy_points(10),
		Attack_damage(5)
	{
		std::cout << "ClapTrap named" << name << "constructor called" << std::endl;
		this -> _name = _name;
	}

	ClapTrap::ClapTrap() : _name("default"),Hit_points(10),Energy_points(10),Attack_damage(0) 
	{
		std::cout << "ClapTrap named Default constructor called!" << std::endl;
	}

	ClapTrap::~ClapTrap()
	{
		std::cout << "ClapTrap named" << this->_name << "deconstructor called" << std::endl;
	}

	void ClapTrap::attack(const std::string& target)
	{
		if (this -> Hit_points <= 0)
		{
			std::cout << this-> _name << "cant attack" << std::endl;
		}
		else
		{
			for (int i = 0; i < (int)this->Attack_damage; i++)
			{
				if (this-> Energy_points <=0)
				{
					std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->Attack_damage << " points of damage! But he has no EP left!" << std::endl;
					return ;
				}
				else
				{
					for (int i = 0; i < (int)this->Attack_damage; i++)
					{
						if (this-> Energy_points <= 0)
						{
							std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->Attack_damage << " points of damage! But he has no EP left!" << std::endl;
							return;
						}
					}
					this -> Energy_points--;
				}
			}
		}
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
	}

 	void ClapTrap::takeDamage(unsigned int amount)
	{
		for (int i = 0; i < (int)amount; i++)
		{
			if (this -> Hit_points <= 0)
			{
			std::cout << "ClapTrap " << this->_name << " has no more HP left before taking " << amount << " point of damage" << std::endl;
			return;
			}
		this ->Hit_points--;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " point of damage!" << std::endl;
}

 	void ClapTrap::beRepaired(unsigned int amount)
	{
		for (int i = 0; i < (int)amount; i++)
		{
			if (this -> Energy_points <= 0)
			{
			std::cout << "ClapTrap " << this->_name << " repairs himself " << i << " point of damage! But he has no EP left!" << std::endl;
			return ;
			}
			this->Hit_points++;
			this->Energy_points--;
		}
	std::cout << "ClapTrap " << this->_name << " repairs himself " << amount << " point of damage!" << std::endl;
	}
