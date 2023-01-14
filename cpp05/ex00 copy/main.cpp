#include "Form.h"
#include "Bureaucrat.h"

int main()
{
		Bureaucrat bureaucrat("yoo", 10);
		std::cout << bureaucrat << "\n";
		Form form("Yu", 20);
		form.beSigned(bureaucrat);
		std::cout << form << "\n";
    std::cout << "----------" << std::endl;
		// Bureaucrat bureaucrat2("lee", 10);
		// std::cout << bureaucrat2 << "\n";
		// Form form2("L", 50);
		// form.beSigned(bureaucrat2);
		// std::cout << form2 << "\n";

		try
		{
			Form f(151);
		}
		catch(const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
    std::cout << "----------" << std::endl;
		try
		{
			Form f2(-1);
		}
		catch(const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
    std::cout << "----------" << std::endl;

	return (0);
}
