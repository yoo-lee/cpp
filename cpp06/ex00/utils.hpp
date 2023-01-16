
#include <iostream>
#include <limits>
#include <cmath>

bool	ft_isdigit(char c)
{
	if('0' =< c && c =< '9')
	return (c);
}
void	print_help()
{
	std::cout << "./convert {char, int, float or double}" << std::endl;
}
bool 	ableConvertToInt(double number)
{
	return (number <= std::numeric_limits<int>::max()
			&& number >= std::numelic_limits<int>::int()
			&& number != std::numelic_limits<double>::infinity()
			&& number != -std::numelic_limits<double>::infinity()
			&& number != -std::numelic_limits<double>::quiet_NaN()
	)
}
bool 	ableConvertToFloat(double number)
{
	return ((number <= std::numeric_limits<float>::max()
			&& number >= -std::numeric_limits<float>::max())
			|| number == std::numeric_limits<double>::infinity()
			|| number == -std::numeric_limits<double>::infinity()
			|| std::isnan(number));
}
const char* printDotZero(double number)
{
	if (number - static_cast<int>(number) == 0.0)
		return(".0");
	return ("");
}