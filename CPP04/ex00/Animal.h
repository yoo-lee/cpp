#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
	public:
	Animal();
	Animal(const Animal &obj);
	virtual ~Animal();

	Animal &operator = (const Animal &obj);
	virtual void makesound() const;
	const std::string &getType() const;	

	protected:
	std::string type;
};

std:: ostream	&operator<<(std:: &ostream, const Animal &instanse)

class Cat : public Animal
{

public:

	Cat( void );
	Cat( const Cat &src );
	~Cat( void );

	virtual void	makeSound( void ) const ;
};

class Dog : public Animal
{

public:

	Dog( void );
	Dog( const Dog &src );
	~Dog( void );

	virtual void	makeSound( void ) const ;

private:

};

#endif