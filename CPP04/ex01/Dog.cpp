#include "Animal.h"

	Dog::Dog() : Animal()
	{
		this -> type = "Dog";
		this -> Dog_Brain = new  Brain();
		std::cout << "Default constructor for Dog \n";
	}

	Dog::~Dog()
	{
		delete this -> Dog_Brain;
	std::cout << "Deconstructor for Dog \n";
	}

	Dog::Dog( Dog const &obj) : Animal()
	{
	std::cout << "Copy constructor for Dog \n";
	*this = obj;	
	}
	
	void	Dog::makeSound() const
	{
	std::cout << "Bowwow \n";
	}

	Dog& Dog::operator = (const Dog &  obj)
	{
		// std::cout << "Assigment constructor for Cat\n";
		type = obj.getType();
		*this -> Dog_Brain = *(obj.getBrain());
		return *this; 
	}

	Brain *Dog::getBrain() const
	{
		return(this -> Dog_Brain);
	}

// 	Animal	&Dog::operator=( Animal const &rhs )
// {
// 	// std::cout << "Animal Assignement operator for Dog called" << std::endl;
// 	this->type = rhs.getType();
// 	*(this->Dog_Brain) = *(rhs.getBrain());
// 	return *this;
// }