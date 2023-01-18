

	TypeAnalyst()
	{
		if(TypeAnalyst::t_bool)
		std::cout << "Defalt C for TypeA called" << "\n";
	}
	TypeAnalyst(char *input)
	{
		this->analyseNewInput(input)
		if (TypeAnalyst::t_bool)
		std::cout << "Char* constructor for TypeAnalyst called" << std::endl;
	}
	TypeAnalyst(const TypeAnalyst &src)
	{
		if (TypeAnalyst::t_bool)
		std::cout << "Copy constructor for TypeAnalyst called" << std::endl;
		*this = src;
	}
	~TypeAnalyst()
	{
		if (TypeAnalyst::t_bool)
		std::cout << "Destructor for TypeAnalyst called" << std::endl;
	}

	TypeAnalyst &operator = (const TypeAnalyst &obj)
	{
		if (TypeAnalyst::t_bool)
		std::cout << "Assignement operator for TypeAnalyst called" << std::endl;
		this->_selectedType = obj._selectedType;
		this->_charScalar = obj._charScalar;
		this->_intScalar = obj._intScalar;
		this->_floatScalar = obj._floatScalar;
		this->_doubleScalar = obj._doubleScalar;
		
		return *this;
	}

	void	analyseNewInput (char *input)
	{
		this-> resetValues();
		if (!input[0])
			throw TypeAnalyst::EmptyInput();
		if(!this->getType(input))
			throw TypeAnalyst::AnalysedError();
		this -> setVariable(input);
	}
	void 	printTypes()
	{
		if (this-> _selectedType == TypeAnalyst::noType)
		std::cout << "No type set" << std::endl;
		this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
	}
	
	void	resetValues( void )
	{
		this->_selectedType = TypeAnalyst::noType;
		this-> _charScalar = 0;
		this->_intScalar = 0;
		this->_floatScalar = 0;
		this->_doubleScalar = 0;
	}
	bool	getType( char *input )
	{
		this -> _selectedType = handle_special_cases(input);
		if (this -> _selectedType != TypeAnalyst::noType)
			return ture;
		if ((input[0] >= '0' && input[0] <= '9') || input[0] == '-'
			|| input[0] == '.')
			{
				this -> _selectedType = handle_numeric_values(input);
				if (this-> selectedType != TypeAnalyst::noType)
					return true;
			}
			if (input[1])
				return false;
	}
	void	setVariable( char *input )
	{
		if (this -> _selectedType == TypeAnalyst::charType)
			{
				if(TypeAnalyst::t_bool)
					std::cout << "Selected char type" << std::endl;
				this ->_charScalar = input[0];
			}
		else if (this->_selectedType == TypeAnalyst::intType)
		{
		if (TypeAnalyst::t_bool)
					std::cout << "Selected int type" << std::endl;
		this -> _intscalar = atoi(input);
		}
		else if (this->_selectedType == TypeAnalyst::floatType)
		{
		if (TypeAnalyst::t_bool)
					std::cout << "Selected float type" << std::endl;
		this -> _intscalar = atof(input);
		}
		else if (this->_selectedType == TypeAnalyst::doubleType)
		{
		if (TypeAnalyst::t_bool)
					std::cout << "Selected double type" << std::endl;
		this -> _intscalar = atof(input);
		}
	}
	int		handle_special_cases( char *input ) const
	{
		const std::stringspecial_doubles[] =
		{" inf", "+inf"}
	}
	int		handle_numeric_values( char *input ) const;
	void	printChar( void );
	bool	canConvertToChar( double number );
	void	printInt( void );
	void	printFloat( void );
	void	printDouble( void );


	static const int noType = -1;
	static const int charType = 0;
	static const int intType = 1;
	static const int floatType = 2;
	static const int doubleType = 3;

public:
	class EmptyInput: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Input Error";
		}
	} 
	
	class AnalysedError: public exception
	{
		public :
		virtual const char* what() const throw()
		{
			return "The input is invalid char..."
		}
	}
}

#endif
// Write a program that takes as parameter 
// a string representation of a C++ literal in
// its most common form.
std::string s;
s = 
//  This literal must belong to one of the following a scalar types:
// char, int, float or double. Except for char parameters, 
// only the decimal notation will be
// used.
// Examples of char literals: ’c’, ’a’, ...
// To make things simple, please note that
//  non displayable characters shouldn’t be used as
// inputs.
 If a conversion to char is not displayable, prints an informative message.
// Examples of int literals: 0, -42, 42...
// Examples of float literals: 0.0f, -4.2f, 4.2f...
// You have to handle these pseudo literals as well (you know, for science): -inff, +inff
// and nanf.
// Examples of double literals: 0.0, -4.2, 4.2...
// You have to handle these pseudo literals as well (you know, for fun): -inf, +inf and nan.
// 6
// C++ - Module 06 C++ casts
// You have to first detect the type of the literal passed as parameter, convert it from
// string to its actual type, then convert it explicitly to the three other data types. Lastly,
// display the results as shown below.
// If a conversion does not make any sense or overflows, display a message to inform
// the user that the type conversion is impossible. Include any header you need in order to
// handle numeric limits and special values.
// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0