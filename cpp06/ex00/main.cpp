#include <iostream>
#include <string>
#include <limits>

#define FLAG_CHAR 0
#define FLAG_SPECIAL 1
#define FLAG_INT 2
#define FLAG_DECIMAL_ZERO 3
#define FLAG_DECIMAL_NONZERO 4

void put_int_to_char(int num)
{
	if (' ' <= num && num <= '~')
	{
		std::cout << "char: " << static_cast<char>(num) << std::endl;
	}
	else if (0 <= num && num <= 127)
	{
		std::cout << "char: Non displayed" << std::endl;
	}
	else
	{
		put_int_to_char(static_cast<int>(num));
		std::cout << "char: disable" << std::endl;
	}
}

void put_float_to_int_char(float num)
{
	if (num < std::numeric_limits<int>::min() || std::numeric_limits<int>::max() < num )
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		put_int_to_char(static_cast<int>(num));
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	}
}


int main (int ac, char *av[])
{

	if (ac != 2)
{
	std::cout << "only one argument" << std::endl;
	return 0;
}

std::string str(av[1]);
// int num;
// // int flag = check_num_exit(str, num);

// if (flag < 0)
// return 0;

// if (flag == FLAG_CHAR)
// {
	char c = str[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
// }

// bool int_flag = false;
// if (flag == FLAG_INT)
// {
// 	if (!int_flag)
// 	{
// 		std::cout << str << " cant convert " << std::endl;
// 		return 0;
// 	}
	bool	int_flag = false;
	int int_num = 0;
		int_num = std::stoi(str);
		std::cout << int_num << std::endl;
	float float_num = 0;
		float_num = std::stof(str);
		std::cout << float_num << std::endl;
		
	put_int_to_char(int_num);
	try
	{
		int_num = std::stoi(str);
		int_flag = true;
	}
	catch(const std::exception& e) {}

}

int check_num_exit(const std::string& str, int &num)
{
	if (str.length() == 1 && (str[0] < '0' || '9' < str[0]))
	{
		return FLAG_CHAR;
	}

	if (str == "inff" || str == "+inff" || str == "inff" || str == "+inff" || \
	str == "+nanff" ||)
}


// You have to handle these pseudo literals as well (you know, for science): -inff, +inff
// and nanf.これらの疑似リテラルも扱わなければなりません（ご存知のように、科学のためです）。-inff、+inff
// とnanfです。
