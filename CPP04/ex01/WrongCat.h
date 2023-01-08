#ifndef WRONGCAT_H	
#define WRONGCAT_H

	#include <string>
	#include <iostream>
	#include "WrongAnimal.h"


	class WrongCat : public WrongAnimal
	{
		public:
		WrongCat();
		
		WrongCat(const WrongCat &obj);
		~WrongCat();
		void	makesound();

	};

	#endif