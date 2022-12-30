# include "WrongCat.h"

		WrongCat()
		{
		std::cout << "Default constructor for WrongCat called" << std::endl;
		this -> type = "Wrongcat";
		}
		
		~WrongCat()
		{
		std::cout << "Default constructor for WrongCat called" << std::endl;
			
		}
		WrongCat(const WrongCat &obj)
		{
		std::cout << "Copy constructor for WrongCat called" << std::endl;
		*this = obj;
		}

		
		void	makesound()
		{
			std::cout << "Myao" << std::endl;
		}


	

