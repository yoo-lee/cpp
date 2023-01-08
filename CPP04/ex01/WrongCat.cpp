# include "WrongCat.h"

		WrongCat::WrongCat()
		{
		this -> type = "Wrongcat";
		std::cout << "Default constructor for WrongCat called" << std::endl;
		}
		
		WrongCat::~WrongCat()
		{
		std::cout << "Default constructor for WrongCat called" << std::endl;
		}

		// WrongCat::WrongCat(const WrongCat &obj)
		// {
		// std::cout << "Copy constructor for WrongCat called" << std::endl;
		// *this = obj;
		// }
		
		void	WrongCat::makesound()
		{
			std::cout << "Myao" << std::endl;
		}