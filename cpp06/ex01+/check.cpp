#include "convert.hpp"

bool	checkChar(std::string str)
{
	return (str.length() == 1 && (str[0] < '0' || '9' < str[0] ));
}

bool	checkInt(std::string str)
{
	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}


bool	checkFloat(std::string str)
{
	size_t	i;
	bool	d = false;

	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (i == str.length() - 1)
				return (str[i] == 'f');
			if (str[i] == '.')
			{
				if (d)
					return (false);
				d = true;
			}
			else
				return (false);
		}
	}
	return (false);
}
using namespace std;
t_type getType(std::string str)
{
	// t_type i;
cout << str<< endl;
	// if ((i = checkException(str)) != UNKNOWN)
	// 	return (i);
	if (checkChar(str))
		return CHAR;
	if (checkInt(str))
		return INT;
	if (checkFloat(str))
		return FLOAT;
	// if (checkDouble(str))
	// 	return DOUBLE;
	return UNKNOWN;
}
