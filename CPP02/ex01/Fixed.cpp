#include "Fixed.h"

	Fixed::Fixed()
    {
        std::cout << "default constructor called"<<std::endl;
        this->Fixeded_point_number = 0;
    }

	Fixed::Fixed(const int x)
    {
        std::cout << "int constructor called"<<std::endl;
        this -> Fixeded_point_number = x << this -> fractionalBits;
    }

    // float to a integer
    Fixed::Fixed(const float float_n)
    {
        std::cout << "Float constructor called" << std::endl;
		std::cout << (int)(roundf(float_n * (1 << this->fractionalBits)))  << std::endl;
        this->Fixeded_point_number = (int)(roundf(float_n * (1 << this->fractionalBits)));
    }

    Fixed::Fixed(const Fixed& obj)
    {
        std::cout << "Copy constructor called\n";
        this -> Fixeded_point_number = obj.getRawBits(); 
    }

	Fixed & Fixed::operator=(const Fixed& obj)
    {
        std::cout << "Assigned operator called\n";
        if (this != &obj)
            this -> Fixeded_point_number = obj.getRawBits();
        return(*this);
    }

    float Fixed::toFloat(void) const
    {
        return ((float)this-> Fixeded_point_number /(float)(1 << this-> fractionalBits) );
    }

	int Fixed::toInt( void ) const
    {
        return (this-> Fixeded_point_number >> fractionalBits);
    }

	std::ostream & operator << (std::ostream &x, Fixed const i)
    {
        x << i.toFloat();
        return(x);
    }
    
	int 	Fixed::getRawBits(void) const
    {
        std::cout << "getRawBits member function called" << std::endl;
        return (this -> Fixeded_point_number);
    }

	void	Fixed::setRawBits(int const raw)
    {
        this->Fixeded_point_number = raw;
    }

    Fixed::~Fixed()
    {
        std::cout << "deconstructor called"<<std::endl;
    }
	









