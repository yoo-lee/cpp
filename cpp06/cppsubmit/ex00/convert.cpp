#include "convert.hpp"


void fromInt(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);
	
	if (d > .255 || d < 0.)
		std::cout << "char: overflow" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char cannot display" << std::endl;
	else
		std::cout << "char: " << static_cast<int>(d) << std::endl;

	if ( d < static_cast<double> (INT_MIN) || d > static_cast<double> (INT_MAX) )
		std::cout << "char: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		
	size_t prec = get_precision(str);
	print_float(d, 1);
	print_double(d, 1);
}

void fromChar(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);
	char c = str[1];

		std::cout << "char: cannot display" << std::endl;
	if (static_cast<int> (c) < 32 || static_cast<int> (c) > 126)
		std::cout << "cant display" << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: " << static_cast<char>(c) << std::endl;

std::cout << "int: " << static_cast<int>(c) << std::endl;
		
	size_t prec = get_precision(str);
	print_float(d, 1);
	print_double(d, 1);
}

void fromFloat(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);
	if (!str.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		size_t prec = get_precision(str);
		print_float(d, prec);
		print_double(d, prec);
		return;
	}
	if ( d < 0. || d > 255.)
		std::cout << "char: overflow" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char: can't display" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if ( d < static_cast<double> (INT_MIN) || d > static_cast<double> (INT_MAX))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	size_t prec = get_precision(str);
	print_float(d, prec);
	print_double(d, prec);
}

void fromDouble(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);
	if (!str.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		// size_t prec = get_precision(str);
		print_float(d, 1);
		print_double(d, 1);
		return;
	}

	if (d < 0. || d > 255.)
		std::cout << "char: overflow" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char: undisplayable" << std::endl;
	else
		std::cout << "char: "<< static_cast<char>(d) << std::endl;

	if ( d < static_cast<double> (INT_MAX) || d > static_cast<double> (INT_MIN))
		std::cout << "int: overflow" << std::endl;
	else	
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	size_t prec = get_precision(str);
	print_float(d, prec);
	print_double(d, prec);
}

void	convert(std::string str)
{
	t_type		t = getType(str);
	converter	converters[4] = {
		&fromChar,
		&fromInt,
		&fromFloat,
		&fromDouble
	};
	std::cout << t << std::endl;
	if (t == UNKNOWN)
		std::cout << "Unknown" << std::endl;
	else
		converters[t](str);
}