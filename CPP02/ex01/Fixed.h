#ifndef FIXED_H
# define FIXED_H

#include <fstream>
#include <iostream>
# include <cmath>


class Fixed {

// Add the following public constructors and public member functions to your class:
private:
	int Fixeded_point_number;
    static const int fractionalBits = 8;
public:
	Fixed();
// • A constructor that takes a constant integer as a parameter.
// It converts it to the corresponding fixed-point value. 
// The fractional bits value is
// initialized to 8 like in exercise 00.
	Fixed(int x);
    Fixed(const float float_n);

	~Fixed();
	// copy constructor
    Fixed(const Fixed& obj);
	// assignation constructor
	Fixed & operator=(const Fixed& obj);

	 // • A constructor that takes a constant floating-point number as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.
	
// • A member function float toFloat( void ) const;
// that converts the fixed-point value to a floating-point value.
	float toFloat( void ) const;
// • A member function int toInt( void ) const;
// that converts the fixed-point value to an integer value.
	int toInt( void ) const;

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	void	setRawBits(float const raw);
};

// And add the following function to the Fixed class files:
// • An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.
		std::ostream & operator << (std::ostream &x, Fixed const i);
	// std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif

