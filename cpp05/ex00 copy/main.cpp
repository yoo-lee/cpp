#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat bureaucrat("yoo", 1370);
		// std::cout << bureaucrat.getName() << "\n";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}

	try
	{
		Bureaucrat bureaucrat("lee", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}	

	try
	{
		Bureaucrat bureaucrat("Bob", 1);
		bureaucrat.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}

	try {
		Bureaucrat bureaucrat("Jake", 150);
		bureaucrat.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	return (0);
}
