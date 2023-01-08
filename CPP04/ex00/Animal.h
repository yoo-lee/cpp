#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	public:
	Animal();
	Animal(const Animal &obj);
	virtual ~Animal();

	Animal &operator = (const Animal &obj);
	virtual void makeSound() const;
	const std::string &getType() const;	

	protected:
	std::string type;
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instanse);

class Cat : public Animal
{
public:

	Cat( void );
	Cat( const Cat &src );
	virtual ~Cat( void );

	Cat &operator = (const Cat &obj);
	virtual void	makeSound( void ) const ;
};

class Dog : public Animal
{
public:

	Dog( void );
	Dog(  const Dog  &src );
	virtual ~Dog( void );

	Dog& operator = (const Dog &obj);
	virtual void	makeSound( void ) const ;
};

#endif