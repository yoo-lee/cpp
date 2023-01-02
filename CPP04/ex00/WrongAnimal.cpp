#include "WrongAnimal.h"


	std::ostream	&WrongAnimal::operator<< (std::ostream &ostream, const  WrongAnimal &insrance)
	{
		ostream << instance.getType();
		return ostream;
	}
	
		WrongAnimal::WrongAnimal()
		{
			std::cout << "Default constructor for WrongAnimal called" << std::endl;
		}
		WrongAnimal::~WrongAnimal()
		{
			std::cout << "Deconstructor for WrongAnimal called" << std::endl;
			
		}
		WrongAnimal::WrongAnimal(const WrongAnimal &obj)
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
		void	WrongAnimal::makesound()
		{
			std::cout << "Adsfasngoa" << std::endl;
		}

		const std::string &WrongAnimal::getType(void) const
		{
			return (this-> type);
		}

