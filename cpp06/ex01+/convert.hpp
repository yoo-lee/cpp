#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <climits>
#include <stdlib.h>


typedef enum		e_type
{
	CHAR, INT, FLOAT, DOUBLE, UNKNOWN
}	 t_type;

void	convert(std::string str);
void fromFloat(std::string const &str);
void fromChar(std::string const &str);
void fromInt(std::string const &str);
void fromDouble(std::string const &str)
;
bool	checkInt(std::string str);
bool	checkFloat(std::string str);
bool	checkDouble(std::string str);
bool	checkChar(std::string str);

t_type getType(std::string str);

typedef				void (*converter)(std::string const& str);

#endif