#include "convert.hpp"

void fromInt(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);

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

	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void fromChar(std::string const &str)
{
	char c = str[1];
	if (static_cast<int> (c) < 32 || static_cast<int> (c)  > 126)
		std::cout << "char: can't display" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void fromFloat(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);
	if (!str.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(d) << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
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

	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void fromDouble(std::string const &str)
{
	double d = strtod(str.c_str(), NULL);

	if (!str.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(d) << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
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

	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

using namespace std;
void	convert(std::string str)
{
	t_type		t = getType(str);
	converter	converters[4] = {
		&fromChar, &fromInt, &fromFloat, &fromDouble
	};
	cout << t << endl;
	if (t == UNKNOWN)
		std::cout << "Unknown" << std::endl;
	else
		converters[t](str);
}
