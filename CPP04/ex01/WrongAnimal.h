#ifndef WRONGANIMAL_H	
#define WRONGANIMAL_H	
#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		~WrongAnimal();
		
		WrongAnimal& operator=( WrongAnimal const &obj);
		
		void	makesound() const;

		const std::string &getType() const ;

		protected :
		std::string type;
};

	std::ostream	&operator<< (std::ostream &ostream, const  WrongAnimal &insrance);

	#endif