#include "Animal.h"	
	
	Cat::Cat() : Animal()
	{
		this -> type = "cat";
		this -> Cat_Brain = new Brain();
		std::cout << "Default constructor for cat \n";
	}

	Cat::~Cat()
	{
		delete this ->  Cat_Brain;
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

	Cat& Cat::operator = ( Cat const &obj)
	{
		// std::cout << "Assigment constructor for Cat\n";
		type = obj.getType();
		*(this -> Cat_Brain) = *(obj.getBrain());
		return *this; 
	}

	// Animal	&Cat::operator=(  Animal const  &rhs )
	// {
	// // std::cout << "Animal Assignement operator for Cat called" << std::endl;
	// this->type = rhs.getType();
	// *(this->Cat_Brain) = *(rhs.getBrain());
	// return *this;
	// }
	
	Brain *Cat::getBrain() const
	{
		return (this -> Cat_Brain);
	}


	// virtual  Animal &operator = ( const Animal &rhs );

	