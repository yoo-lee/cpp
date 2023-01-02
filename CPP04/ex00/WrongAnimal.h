#ifndef WRONGANIMAL_H	
#define WRONGANIMAL_H	
#include <string>
#include <iostream>

class WrongAnimal
{

		WrongAnimal();
		
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal& operator=(const WrongAnimal &obj);
		void	makesound();

		const std::string &getType(void) const ;

		protected :
		std::string type;
};

	std::ostream	&operator<< (std::ostream &ostream, const  WrongAnimal &insrance);

	#endif