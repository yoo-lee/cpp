#ifndef WRONGCAT_H	
#define WRONGCAT_H	
	
# include "WrongCat.h"

	class WrongCat : public WrongAnimal
	{
		WrongCat();
		
		~WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat& operator=(const WrongCat &obj);
		void	makesound();

		const std::string &getType(void) const ;

		protected :
		std::string type;
	}

	std::ostream	&operator<< (std::ostream &ostream, const  WrongCat &insrance);

	#endif