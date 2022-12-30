#include "Animal.h"	
	
	Cat::Cat()
	{
		this -> type = "cat"
		std::cout << "Default constructor for cat \n";
	}

	Cat::~Cat()
	{
		std::cout << "Deconstructor for cat \n";
	}

	void Cat::makeSound() const
	{
		std::cout << "myao---- \n";
	}

