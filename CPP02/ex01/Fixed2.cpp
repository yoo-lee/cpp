class Fixed {

private:
	int 				_fixedValue;
	static const int	_fracBits;

public:
	Fixed::Fixed(void);
	{
		std::cout << "Default constructor called" << std::endl;
		
	}
	 // no value given yet

	Fixed::Fixed(int n); // convert int to fixed(8) point value
	{
		std::cout << "Int constructor called" << std::endl;
		
	}

Float constructor called
	// fixed to float
	Fixed::Fixed(float f); // convert float to fixed(8) point value
	{
		std::cout << "Float constructor called" << std::endl;
		
	}
	Fixed::~Fixed(void);
	{

	}
	Fixed::Fixed(Fixed const & src); // copy constructor
	{
			std::cout << "Copy constructor called" << std::endl;

	}

	Fixed::Fixed & operator=(Fixed const & rhs); // assignation constructor
	{
		// オペレータは=にかかっていて新しいインスタンスのコピーを代入することができる。

	}

	int 	Fixed::getRawBits(void) const;
	{
		return (_fixedValue);
	}

	void	Fixed::setRawBits(int const raw);
	{
		this->_fixedValue = raw << Fixed::_fracBits 		
	}
}
	float 	Fixed::toFloat(void) const
	{
		std::cout << "Copy assignment operator called" << std::endl;
		
	} // convert fixed point value to a floating point value

	int		Fixed::toInt(void) const
	{

	} // convert fixed point value to an integer value
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //FIXED_HPP

$> ./a.out
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$>