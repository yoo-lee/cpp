#include "Animal.h"	
	
	Cat::Cat() : Animal()
	{
		this -> type = "cat";
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

	Cat::Cat( const Cat &src ) : Animal(src)
	{
		std::cout << "Copy constructor for cat called\n";
		*this = src;
	}

	Cat& Cat::operator = (const Cat &obj)
	{
		// std::cout << "Assigment constructor for Cat\n";
		type = obj.getType();
		return *this; 
	}

	