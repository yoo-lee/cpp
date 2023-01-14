#include "Form.h"

Form::GradeTooHighException::GradeTooHighException(const char* message)
    : message(message) {}

const char* Form::GradeTooHighException::what() const throw()
{
    return message;
}

Form::GradeTooLowException::GradeTooLowException(const char* message)
    : message(message) {}

const char* Form::GradeTooLowException::what() const throw()
{
    return message;
}

Form::Form() :name(""), t_bool(false), gradeRequiredInSign(150), gradeRequiredInExecute(150)  
{}

Form::Form(const std::string& name ) :name(name), t_bool(false), gradeRequiredInSign(150), gradeRequiredInExecute(150)
{}

Form::Form(int grade) :name(""), t_bool(false), gradeRequiredInSign(grade), gradeRequiredInExecute(grade)
{
	if (grade > 150)
		throw GradeTooLowException("Expection in constrouctor. grade is too low");
	if (grade < 1)
		throw GradeTooLowException("Expection in constrouctor. grade is too high");
}

Form::Form(const std::string &name, int grade) :name(name), t_bool(false), gradeRequiredInSign(grade), gradeRequiredInExecute(grade)
{
	if (grade > 150)
		throw GradeTooLowException("Expection in constrouctor. grade is too low");
	
	if (grade < 1)
		throw GradeTooLowException("Expection in constrouctor. grade is too high");
}

Form::Form(int gradeRequiredInsign, int gradeRequiredInExcute)
: name("no_name"), t_bool(false),
      gradeRequiredInSign(gradeRequiredInsign),
      gradeRequiredInExecute(gradeRequiredInExcute)
	  {
		if (gradeRequiredInSign > 150 || gradeRequiredInExcute > 150)
			throw GradeTooLowException("Expection in constrouctor. grade is too low");
		if (gradeRequiredInSign < 1 || gradeRequiredInExcute < 1)
			throw GradeTooHighException("Expection in constrouctor. grade is too high");
	  }

	
	Form::Form(const Form& a)
    : name(a.getName()), t_bool(false),
      gradeRequiredInSign(a.getGradeRequiredInSign()),
      gradeRequiredInExecute(a.getGradeRequiredInExecute()) {}

	Form::~Form() {}

	Form& Form::operator = (const Form& obj)
	{
		t_bool = obj.getbool();
		return *this;
	}

const std::string& Form::getName() const
	{
		return name;
	}

bool Form::getbool() const
{
	return t_bool;
}

int Form::getGradeRequiredInSign() const
{
    return gradeRequiredInSign;
}

int Form::getGradeRequiredInExecute() const
{
    return gradeRequiredInExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (t_bool)
	{return;}
	if (gradeRequiredInSign < b.getGrade())
		{
			throw GradeTooLowException("Exception in be signed the grade is too low");
		}
		t_bool = true;
}

std::ostream& operator<<(std::ostream& a, const Form &b)
{
	a << "name: " << b.getName() << \
          ", isSigned: " << b.getbool() <<\
          ", gradeRequiredInSign: " << b.getGradeRequiredInSign() << \
          ", gradeRequiredInExecute: " << b.getGradeRequiredInExecute();
    return a;
}
