#include "AForm.h"

AForm::GradeTooHighException::GradeTooHighException(const char* message)
    : message(message) {}

const char* AForm::GradeTooHighException::what() const throw()
{
    return message;
}

AForm::GradeTooLowException::GradeTooLowException(const char* message)
    : message(message) {}

const char* AForm::GradeTooLowException::what() const throw()
{
    return message;
}

AForm::AForm() :name(""), t_bool(false), gradeRequiredInSign(150), gradeRequiredInExecute(150)  
{}

AForm::AForm(const std::string& name ) :name(name), t_bool(false), gradeRequiredInSign(150), gradeRequiredInExecute(150)
{}

AForm::AForm(int grade) :name(""), t_bool(false), gradeRequiredInSign(grade), gradeRequiredInExecute(grade)
{
	if (grade > 150)
		throw GradeTooLowException("Expection in constrouctor. grade is too low");
	if (grade < 1)
		throw GradeTooLowException("Expection in constrouctor. grade is too high");
}

AForm::AForm(const std::string &name, int grade) :name(name), t_bool(false), gradeRequiredInSign(grade), gradeRequiredInExecute(grade)
{
	if (grade > 150)
		throw GradeTooLowException("Expection in constrouctor. grade is too low");
	
	if (grade < 1)
		throw GradeTooLowException("Expection in constrouctor. grade is too high");
}

AForm::AForm(int gradeRequiredInsign, int gradeRequiredInExcute)
: name("no_name"), t_bool(false),
      gradeRequiredInSign(gradeRequiredInsign),
      gradeRequiredInExecute(gradeRequiredInExcute)
	  {
		if (gradeRequiredInSign > 150 || gradeRequiredInExcute > 150)
			throw GradeTooLowException("Expection in constrouctor. grade is too low");
		if (gradeRequiredInSign < 1 || gradeRequiredInExcute < 1)
			throw GradeTooHighException("Expection in constrouctor. grade is too high");
	  }

	
AForm::AForm(const AForm& a)
    : name(a.getName()), t_bool(false),
      gradeRequiredInSign(a.getGradeRequiredInSign()),
      gradeRequiredInExecute(a.getGradeRequiredInExecute()) {}

AForm::~AForm() {}

	AForm& AForm::operator = (const AForm& obj)
	{
		t_bool = obj.getbool();
		return *this;
	}

const std::string& AForm::getName() const
	{
		return name;
	}

bool AForm::getbool() const
{
	return t_bool;
}

int AForm::getGradeRequiredInSign() const
{
    return gradeRequiredInSign;
}

int AForm::getGradeRequiredInExecute() const
{
    return gradeRequiredInExecute;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (t_bool)
	{return;}
	if (gradeRequiredInSign < b.getGrade())
		{
			throw GradeTooLowException("Exception in be signed the grade is too low");
		}
		t_bool = true;
}

const std::string& AForm::getTarget() const
{
	return target;
}


std::ostream& operator<<(std::ostream& a, const AForm &b)
{
	a << "name: " << b.getName() << \
          ", isSigned: " << b.getbool() <<\
          ", gradeRequiredInSign: " << b.getGradeRequiredInSign() << \
          ", gradeRequiredInExecute: " << b.getGradeRequiredInExecute();
    return a;
}
