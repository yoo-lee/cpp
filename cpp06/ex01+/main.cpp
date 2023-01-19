#include "convert.hpp"

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	std::string str(argv[1]);
	if (str.length() == 0)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	convert(str);
	return (0);
}
