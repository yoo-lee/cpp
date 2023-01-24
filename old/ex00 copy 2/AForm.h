#ifndef AFORM_H
#define AFORM_H
#include "Bureaucrat.h"
#include <type_traits>
#include <iostream>
#include <string>

class AForm
{
private:
	std::string name;
	bool t_bool;
	const int gradeRequiredInSign;
    const int gradeRequiredInExecute;
	const std::string target;
	virtual void action() const = 0;

public:
	class GradeTooHighException : public std::exception
	{
	private:
		const char* message;

	public:
	 	GradeTooHighException(const char* message);
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
    {
    private:
        const char* message;

    public:
        explicit GradeTooLowException(const char* message);
        virtual const char* what() const throw();
    };

	AForm();
    explicit AForm(const std::string& name);
    explicit AForm(int grade);
    AForm(const std::string& name, int grade);
    AForm(int gradeRequiredInSign, int gradeRequiredInExecute);
    AForm(const std::string& name, int gradeRequiredInSign, int gradeRequiredInExecute);
    AForm(const AForm& a);
    ~AForm();

    AForm& operator=(const AForm& a);

    const std::string& getName() const;
    bool getbool() const;
	virtual void	execute( const Bureaucrat &executor ) const;
    int getGradeRequiredInSign() const;
    int getGradeRequiredInExecute() const;
    const std::string& getTarget() const;


    void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const AForm &a);

#endif

// The grades of the AForm follow the same rules that apply to
//  the Bureaucrat. Thus,
// the following exceptions will be thrown if a Aform grade is
//  out of bounds:
// AForm::GradeTooHighException and AForm::GradeTooLowException.
// Same as before, write getters for all attributes 
// and an overload of the insertion («)
// operator that prints all the Aform’s inAformations.

// Add also a beSigned() member function
//  to the AForm that takes a Bureaucrat as
// parameter. It changes the Aform status
//  to signed if the bureaucrat’s
//  grade is high enough
// (higher or egal to the required one).
//  Remember, grade 1 is higher than grade 2.
// If the grade is too low, throw a AForm::GradeTooLowException.
// Lastly, add a signAForm() member function to the Bureaucrat. If the Aform got signed,
// it will print something like:
// <bureaucrat> signed <Aform>
// Otherwise, it will print something like:
// <bureaucrat> couldn’t sign <Aform> because <reason>.
// Implement and turn in some tests to ensure everything works as expected.

