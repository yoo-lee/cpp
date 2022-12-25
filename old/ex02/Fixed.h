#ifndef FIXED_H
# define FIXED_H

#include <fstream>
#include <iostream>
# include <cmath>


class Fixed 
{
	private:
	int		_n;
	static const _f = 8;
	public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f)
	Fixed(const Fixed &obj);

	~Fixed();

	int		toInt( void ) const;
	int		getRawBits( void ) const;

	void	setRawBits( int raw );

	float	toFloat( void ) const;
// 	Add public member functions to your class to overload the following operators:
// • The 6 comparison operators: >, <, >=, <=, == and !=.
bool	Fixed operator> (const Fixed & obj) const; 
bool	Fixed operator< (const Fixed & obj) const; 
bool	Fixed operator<= (const Fixed & obj) const; 
bool	Fixed operator<= (const Fixed & obj) const; 
bool	Fixed operator!= (const Fixed & obj) const; 
// • The 4 arithmetic operators: +, -, *, and /.
	Fixed& operator= (const Fixed & obj); 
	Fixed& operator+ (const Fixed & obj); 
	Fixed& operator- (const Fixed & obj); 
	Fixed& operator* (const Fixed & obj); 
	Fixed& operator/ (const Fixed & obj); 
// • The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
	Fixed& operator++(int n); 
	Fixed& operator--(int n); 

// post-decrement) operators, that will increase or decrease the fixed-point value from
// the smallest representable ϵ such as 1 + ϵ > 1.

// Add these four public overloaded member functions to your class:
// • A static member function min that takes as parameters two references on fixed-point
// numbers, and returns a reference to the smallest one.
	static Fixed& min(Fixed &fix1,Fixed &fix2); 

// • A static member function min that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the smallest one.
	static Fixed& min(const Fixed  &fix1, Fixed const &fix2);

// • A static member function max that takes as parameters two references on fixed-point
// numbers, and returns a reference to the greatest one.
	static Fixed& max(Fixed &fix1,Fixed &fix2); 

// • A static member function max that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the greatest one.
	static Fixed& max(const Fixed  &fix1, Fixed const &fix2);
};

#endif

