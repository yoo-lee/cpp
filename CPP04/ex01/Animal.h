#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

#define NUM_IDEAS 100
class Brain
{
private:
    std::string ideas[NUM_IDEAS];
    bool checkIndex(int index) const;

public:
    Brain();
    Brain(const Brain& a);
    ~Brain();

    Brain& operator=(const Brain& a);

    const std::string& getIdeas(int index) const;
    void setIdeas(int index, const std::string& str);
};

class Animal
{
	public:
	Animal();
	Animal(const Animal &obj);
	virtual ~Animal();

	virtual Animal &operator = (const Animal &obj);
	virtual void makeSound() const;
	const std::string &getType() const;	
	// virtual Brain *getBrain() const;

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

	// virtual  Animal &operator = ( const Animal &rhs );
			 Cat 	&operator = ( Cat const &obj);
	virtual void	makeSound( void ) const ;
	Brain *getBrain() const;

private:
	Brain * Cat_Brain;
};

class Dog : public Animal
{
public:

	Dog( void );
	Dog(  const Dog  &src );
	virtual ~Dog( void );

	// virtual Animal &operator = ( const Animal &rhs );
	Dog    &operator = ( const Dog &obj);
	virtual void	makeSound( void ) const ;
	Brain *getBrain() const;

private:
	Brain *Dog_Brain;
};


#endif


// Constructors and destructors of each class must display specific messages.
// Implement a Brain class. 

// It contains an array of 100 std::string called ideas.
// This way, Dog and Cat will have a private Brain* attribute.

// Upon construction, Dog and Cat will create their Brain using new Brain();
// Upon destruction, Dog and Cat will delete their Brain.

// In your main function, create and fill an array of Animal objects. Half of it will
// be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs
// and cats as Animals. The appropriate destructors must be called in the expected order.
// Don’t forget to check for memory leaks.
// A copy of a Dog