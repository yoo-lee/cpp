#include "Fixed.h"


    int					_n;
	static const int	_c = 8;
	Fixed(): _n(0)
    {

    }

	Fixed(int n): _n(n << _c)
    {
    }

    Fixed(const Fixed &obj)
    {
        *this = obj;
    }

	Fixed(const float f): _n(int)round(f *(1 << _c))
    {
    }

	~Fixed()
    {
        
    }

    int		toInt( void ) const;
	int		getRawBits( void ) const;

	void	setRawBits( int raw )

	float	toFloat( void ) const;
// 	Add public member functions to your class to overload the following operators:
// • The 6 comparison operators: >, <, >=, <=, == and !=.
bool	Fixed Fixed::operator> (const Fixed & obj) const
    {
        return (this -> toFloat() > obj.toFloat());
    }

bool	Fixed Fixed::operator< (const Fixed & obj) const 
        {
        return (this -> toFloat() < obj.toFloat());
        }

bool	Fixed Fixed::operator>= (const Fixed & obj) const 
        {
        return (this -> toFloat() >= obj.toFloat());
        }

bool	Fixed Fixed::operator<= (const Fixed & obj) const
        {
        return (this -> toFloat() <= obj.toFloat());
        }

bool	Fixed Fixed::operator!= (const Fixed & obj) const
        {
        return (this -> toFloat() != obj.toFloat());
        }
// • The 4 arithmetic operators: +, -, *, and /.
	Fixed&Fixed::operator= (const Fixed & obj)
    {
        this -> _n = obj.getRawBits();
        return (*this);
    }
	Fixed& Fixed::operator+ (const Fixed & obj)
    {
        return (Fixed(obj.toFloat() + this -> toFloat));
    } 
	Fixed& Fixed::operator- (const Fixed & obj)
    {
        retrun (Fixed(obj.toFloat - this-> toFloat));
    }
	Fixed& Fixed::operator* (const Fixed & obj)
    {
        retrun (Fixed(obj.toFloat * this-> toFloat));
    } 
	Fixed& Fixed::operator/ (const Fixed & obj) 
    {
        retrun (Fixed(obj.toFloat / this-> toFloat));
    }
// • The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
	Fixed& operator++() 
    {
        (this -> _n)++;
        return (*this);
    }
	Fixed& operator--() 
    {
        (this -> -n)--;
        return(*this);
    }

// post-decrement) operators, that will increase or decrease the fixed-point value from
// the smallest representable ϵ such as 1 + ϵ > 1.
    Fixed Fixed::operator++(int n)
    {
        Fixed obj = *this;
        if (n <0)
        {
            while (n <= 0)
            {
                --*this;
                n++;
            }
        }
        else
        {
            while (n >= 0)
            {
                ++*this;
                n--;
            }
            return(*this);
        }
    } 

    Fixed Fixed::operator--(int n) 
    {
        fixed   obj = *this;
        if (n < 0)
        {
            while(n <= 0)
            {
                ++*this;
                n++;
            }
        }
        else
        {
            while(n >= 0)

        }
        (this -> -n)--;
        return(*this);
    }

// • A static member function min that takes as parameters two references on fixed-point
// numbers, and returns a reference to the smallest one.
	static Fixed& min(Fixed &fix1,Fixed &fix2) 
    {
        if (fix1 > fix2)
            return (Fixed fix2);
        return (Fixed(fix1))
    }
// • A static member function min that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the smallest one.
	static Fixed& min(const Fixed  &fix1, Fixed const &fix2)
    {
        if (fix1 > fix2)
            return (Fixed fix2);
        return (Fixed(fix1))
    }
// • A static member function max that takes as parameters two references on fixed-point
// numbers, and returns a reference to the greatest one.
	static Fixed& max(Fixed &fix1,Fixed &fix2) 
    {
        if (fix1 > fix2)
            return (Fixed fix2);
        return (Fixed(fix1))
    }
// • A static member function max that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the greatest one.
	static Fixed& max(const Fixed  &fix1, Fixed const &fix2)
    {
        if (fix1 > fix2)
            return (Fixed fix2);
        return (Fixed(fix1))
    }
    
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
        this->Fixeded_point_number = (int)(roundf(float_n * (1 << this->fractionalBits)))
    }

    Fixed::Fixed(const Fixed& obj)
    {
        std::cout << "Copy constructor called\n";
        this -> Fixeded_point_number = obj.getRawBits() 
    }

	Fixed & Fixed::operator=(const Fixed& obj)
    {
        std::cout << "Assigned operator called\n";
        if (this != &obj)
            this -> Fixeded_point_number = obj.getRawBits()
        return(*this)
    }

    float Fixed::toFloat(void) const
    {
        return ((float)this-> Fixeded_point_number /(float)(1 << this-> fractionalBits) )
    }

	int Fixed::toInt( void ) const
    {
        return (this-> Fixeded_point_number >> fractionalBits)
    }

	std::ostream & operator << (std::ostream &x, Fixed const i)
    {
        x << i.toFloat()
        return(x)
    }
    
	int 	Fixed::getRawBits(void) const
    {
        std::cout << "getRawBits member function called" << std::endl;
        return (this -> Fixeded_point_number)
    }

	void	Fixed::setRawBits(int const raw)
    {
        this->Fixeded_point_number = raw;
    }

    Fixed::~Fixed()
    {
        std::cout << "deconstructor called"<<std::endl;
    }
	









