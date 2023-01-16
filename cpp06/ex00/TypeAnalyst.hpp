#ifndef TYPEANALYST_HPP
#define TYPEANALYST_HPP

# include <iostream>
# include <stdexcept>

class TypeAnalyst
{
	public:
	TypeAnalyst();
	TypeAnalyst(char *input);
	TypeAnalyst(const TypeAnalyst &src);
	~TypeAnalyst();

	TypeAnalyst &operator = (const TypeAnalyst &obj);

	void	analyseNewInput (char *input);
	void 	printTypes();

	static bool t_bool;

	private: 
		int		_selectedType;
	char	_charScalar;
	int		_intScalar;
	float	_floatScalar;
	double	_doubleScalar;

	
	void	resetValues( void );
	bool	getType( char *input );
	void	setVariable( char *input );
	int		handle_special_cases( char *input ) const;
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