#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_n;
	static const int	_c = 8;
public:
	Fixed();
	Fixed( const int n );
	Fixed( const float f);
	Fixed( const Fixed &fixed );

	~Fixed();

	Fixed	&operator=( const Fixed &fixed );
	Fixed	operator+( const Fixed &obj1 ) const;
	Fixed	operator-( const Fixed &obj1 ) const; 
	Fixed	operator*( const Fixed &obj1 ) const;
	Fixed	operator/( const Fixed &obj1 ) const;
	Fixed	&operator++( void );
	Fixed	&operator--( void );
	Fixed	operator++( int n ); // For postincrement
	Fixed	operator--( int n ); // For postdecrement

	bool	operator>( const Fixed &obj1 ) const;
	bool	operator<( const Fixed &obj1 ) const;
	bool	operator>=( const Fixed &obj1 ) const;
	bool	operator<=( const Fixed &obj1 ) const;
	bool	operator==( const Fixed &obj1 ) const;
	bool	operator!=( const Fixed &obj1 ) const;

	int		toInt( void ) const;
	int		getRawBits( void ) const;

	void	setRawBits( int raw );

	float	toFloat( void ) const;

	static Fixed	min( Fixed &obj1, Fixed &obj2);
	static Fixed	min( const Fixed &obj1, const Fixed &obj2);

	static Fixed	max( Fixed &obj1, Fixed &obj2);
	static Fixed	max( const Fixed &obj1, const Fixed &obj2);
};

std::ostream	&operator<<( std::ostream &out, const Fixed &fixed );

# endif