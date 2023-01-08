#include "WrongAnimal.h"

	
		WrongAnimal::WrongAnimal():type("")
		{
			std::cout << "Default constructor for WrongAnimal called" << std::endl;
		}

		WrongAnimal::~WrongAnimal()
		{
			std::cout << "Deconstructor for WrongAnimal called" << std::endl;
			
		}

		WrongAnimal::WrongAnimal( WrongAnimal const &obj)
		{
			std::cout << "Copy constructor for WrongAnimal called" << std::endl;
			*this = obj;
		}

		WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
		{
			std::cout << "Assigment operator for WrongAnimal called" << std::endl;
			this->type = obj.getType();
			return(*this);
		}

		void	WrongAnimal::makesound() const
		{
			std::cout << "Adsfasngoa" << std::endl;
		}

		const std::string &WrongAnimal::getType(void) const
		{
			return (this-> type);
		}

	std::ostream &operator<< (std::ostream &ostream, const  WrongAnimal &instance)
	{
		ostream << instance.getType();
		return ostream;
	}
