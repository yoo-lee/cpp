#ifndef FIX_H
# define FIX_H

#include <iostream>

class Fixed
{
    private:
// ◦ An integer to store the Fixeded-point number value.
    int Fixeded_point_number;
    static const int fractionalBits = '8';

    public:
    Fixed();
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed &x);

    ~Fixed();
// ◦ A member function int getRawBits( void ) const;
// that returns the raw value of the Fixeded-point value.
    int getRawBits(void) const;

// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the Fixeded-point number.
    void setRawBits( int const raw );
};

#endif
