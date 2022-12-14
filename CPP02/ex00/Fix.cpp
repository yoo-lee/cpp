#include "Fix.h"

    Fixed::Fixed()
    {
        std::cout << "Default constructor called" << std::endl;
        this -> Fixeded_point_number = 0;
    }

    Fixed::Fixed(const Fixed& fix)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = fix;
    }

// fixed to int
    int Fixed::getRawBits(void) const
    {
	    std::cout << "getRawBits member function called\n";
	    return (this->fractionalBits);
    }

    Fixed::~Fixed()
    {
        std::cout << "deconstructor\n" << std::endl;
    }

    void Fixed::setRawBits( int const raw )
    {
        Fixeded_point_number = raw;
    }

    Fixed& Fixed::operator=(const Fixed& x)
    {
        std::cout << "Copy assignment operator called" << std::endl;

    }

//  Private members:
// ◦ An integer to store the fixed-point number value.
// ◦ A static constant integer to store the number of fractional bits. Its value
// will always be the integer literal 8.
// • Public members:
// ◦ A default constructor that initializes the fixed-point number value to 0.
// ◦ A copy constructor.
// ◦ A copy assignment operator overload.
// ◦ A destructor.
// ◦ A member function int getRawBits( void ) const;
// that returns the raw value of the fixed-point value.
// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the fixed-point number.
