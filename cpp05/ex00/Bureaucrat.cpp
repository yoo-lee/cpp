	#include "Bureaucrat.h"
	
	Bureaucrat::Bureaucrat()
	{
		if (Bureaucrat::verbose)
		std::cout << "Default constructor for Bureaucrat called\n"
		_name = "";
		_grade = Bureaucrat::lowestGrade;
	}

	Bureaucrat::Bureaucrat( const std::string &name, int grade )
	{
		checkGrade();
		if (Bureaucrat::verbose)
		std::cout << "Standard constructor for Bureaucrat called\n";
		this->_name = name;
		this->_grade = grade;
	}

	Bureaucrat::Bureaucrat(const Bureaucrat &obj)
	{
		checkGrade();
		if (Bureaucrat::verbose)
		std::cout << "Copy constructor for Bureaucrat called\n";
		*this = obj;
	}

	Bureaucrat::~Bureaucrat()
	{
		if (Bureaucrat::verbose)
		std::cout << "Deconstructor for Bureaucrat called\n";
	}

	Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
	{
		this->_grade = obj._grade;
		std::cout << "Name is const and cant be overwritten\n";
		if (Bureaucrat::verbose)
		std::cout << "Assigment constructor called\n";
		return (*this);
	}

	const std::string	&Bureaucrat::getName() const
	{
		return this->_name;
	}

	const int	&Bureaucrat::getGrade() const
	{
		return this->_grade;
	}

	void Bureaucrat::incrementGrade(int quantity)
	{
		if (Bureaucrat::verbose)
		std::cout << "IncrementGrade called\n"
		<< quantity<< std::endl;
	this->_grade -= quantity;
		checkGrade();
	}
	void Bureaucrat::decrementGrade(int quantity)
	{
		if (Bureaucrat::verbose)
		std::cout << "DecrementGrade called\n"
		<< quantity<< std::endl;
	this->_grade += quantity;
		checkGrade();
	}

	void Bureaucrat::checkGrade() const
	{
		if (this -> _grade < Bureaucrat::highestGrade)
			throw Bureaucrat::GradeTooHigh();
		else if (this -> _grade < Bureaucrat::lowestGrade)
			throw Bureaucrat::GradeTooLow();
	}

	Bureaucrat::Bureaucrat(const std::string &name, int grade):_name(name), _grade(grade)
	{
		checkGrade();
		if (Bureaucrat::verbose)
		std::cout << "Standard constructor for Bureaucrat called\n";
	}

	
	std::ostream	&operator<<(std::ostream &ost, const Bureaucrat &obj)
	{
		ost << obj.getName() << "Bureaucrat grade " << obj.getGrade();
		return ost;
	}

	bool Bureaucrat::verbose = false;