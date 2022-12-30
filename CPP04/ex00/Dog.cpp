#include "Animal.h"

	Dog::Dog()
	{
		this -> type = "Dog"
	std::cout << "Default constructor for Dog \n";
	}

	Dog::~Dog()
	{
	std::cout << "Deconstructor for Dog \n";ra
	}

	Dog::Dog(const Dog &obj)
	{
	std::cout << "Copy constructor for Dog \n";
	*this = obj;	
	}
	
	void	Dog::makeSound() const
	{
	std::cout << "Bowwow \n";
	}