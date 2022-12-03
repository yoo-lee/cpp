#ifndef FIX_H
#define FIX_H
#include <iostream>

class Fixed
{
    Private:
// ◦ An integer to store the Fixeded-point number value.
    int Fixeded_point_number
    const int fractionalBits = '8';

    Public:
    Fixed();
    Fixed(Fixed &fixed);
    ~Fixed();
// public:
// 	Fixed();
// 	Fixed (Fixed &fixed);
// 	~Fixed();
// 	Fixed	&operator=(Fixed &fixed);

// 	int		getRawBits(void) const;
// 	void	setRawBits(int raw);


// ◦ A member function int getRawBits( void ) const;
    int getRawBits( void );
// that returns the raw value of the Fixeded-point value.

// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the Fixeded-point number.
    void setRawBits( int const raw );
}
