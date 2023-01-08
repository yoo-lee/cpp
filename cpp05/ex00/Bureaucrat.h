#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
public:

	Bureaucrat (const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &obj);

	const std::string	&getName() const;
	const int	&getGrade() const;

	void incrementGrade(int quantity);
	void decrementGrade(int quantity);

	static bool verbose;

private:

	const std::string _name;
	int					_grade;

	static const int lowestGrade = 150;
	static const int highestGrade = 1;

	Bureaucrat();
	void checkGrade() const;

public:

	class GradeTooHigh : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("The grade you set is too high");
			}
	};

	class GradeTooLow : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("The grade you set is too low");
			}
	};
	
};
	std::ostream	&operator<<(std::ostream &ost, const Bureaucrat &obj)

#endif