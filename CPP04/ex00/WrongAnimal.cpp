#include "WrongAnimal.h"


	std::ostream	&operator<< (std::ostream &ostream, const  WrongAnimal &insrance)
	{
		ostream << instance.getType();
		return ostream;
	}
	
		WrongAnimal()
		{
			std::cout << "Default constructor for WrongAnimal called" << std::endl;
		}
		~WrongAnimal()
		{
			std::cout << "Deconstructor for WrongAnimal called" << std::endl;
			
		}
		WrongAnimal(const WrongAnimal &obj)
		{
			std::cout << "Copy constructor for WrongAnimal called" << std::endl;
			*this = obj;
		}
		WrongAnimal& operator=(const WrongAnimal &obj)
		{
			std::cout << "Assigment operator for WrongAnimal called" << std::endl;
			this->type = obj.getType();
			return(*this);
		}
		void	makesound()
		{
			std::cout << "Adsfasngoa" << std::endl;
		}

		const std::string &getType(void) const
		{
			return (this-> type);
		}

