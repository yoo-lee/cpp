	#include "Animal.h"

	Animal::Animal() : type("") 
	{
		std::cout << "Default constructor for Animal\n";
	}

	Animal::Animal(const Animal &obj) : type("") 
	{
		std::cout << "copy constructor for Animal\n";
		*this = obj;
	}

	Animal::~Animal()
	{
		std::cout << "Deconstructor for Animal\n"; 
	}

	Animal& Animal::operator = (const Animal &obj)
	{
		std::cout << "Assigment constructor for Animal\n";
		this->type = obj.getType();
		return *this; 
	}
	
	void Animal::makeSound() const
	{
		std::cout << "Paooon bowmyao\n"; 
	}

	const std::string &Animal::getType() const
	{
		return (this->type);
	}	

	std:: ostream	&operator<<(std::ostream &ostream, const Animal &instance)
	{
		ostream << instance.getType();
		return ostream;
	}

	// Brain *Animal::getBrain() const
	// {
	// 	return (this -> brain);
	// }



// Constructors and destructors of each class must display specific messages.
// Implement a Brain class. It contains an array of 100 std::string called ideas.
// This way, Dog and Cat will have a private Brain* attribute.
// Upon construction, Dog and Cat will create their Brain using new Brain();
// Upon destruction, Dog and Cat will delete their Brain.
// In your main function, create and fill an array of Animal objects. Half of it will
// be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs
// and cats as Animals. The appropriate destructors must be called in the expected order.
// Don’t forget to check for memory leaks.
// A copy of a Dog