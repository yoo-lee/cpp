class Fixed {

private:
	int 				_fixedValue;
	static const int	_fracBits;

public:
	Fixed(void); // no value given yet
	Fixed(int n); // convert int to fixed(8) point value
	
	Fixed(float f); // convert float to fixed(8) point value
	~Fixed(void);

	Fixed(Fixed const & src); // copy constructor
	Fixed & operator=(Fixed const & rhs); // assignation constructor

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);1
	void	setRawBits(float const raw);
	float 	toFloat(void) const; // convert fixed point value to a floating point value
	int		toInt(void) const; // convert fixed point value to an integer value
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //FIXED_HPP