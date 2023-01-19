#include "convert.hpp"


int get_precision(std::string const &str)
{
	size_t index;
	size_t count;

	count = 0;
	index = str.find('.');
	if (index == std::string::npos
		|| str.find_first_not_of("0f", ++index) == std::string::npos)
		return (0);
	while (str[index + count] && str[index + count] != 'f')
		count++;
	return (count);
}

void print_double(double nb, size_t prec)
{
	std::cout << "Double: ";
	std::cout << std::fixed << std::setprecision(prec) << nb << (prec ? "" : ".0") << std::endl;
}

using namespace std;
void print_float(double nb, size_t prec)
{
	float f;

	std::cout << "Float: ";

	f = static_cast<float>(nb);
	std::cout << std::fixed << std::setprecision(prec) << f << (prec ? "f" : ".0f") << std::endl;
}

// int main ()
// {
// 	print_float(2, 1);
// }