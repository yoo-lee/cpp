#ifndef FORM_H
#define FORM_H
#include "Bureaucrat.h"
#include <type_traits>
#include <iostream>
#include <string>

// Now that you have bureaucrats, 
// let’s give them something to do. What better activity
// could there be than the one of filling out a stack of forms?

// Then, let’s make a Form class. It has:
// • A constant name.
// • A boolean indicating whether it is signed 
// (at construction, it’s not).
// • A constant grade required to sign it.
// • And a constant grade required to execute it.
// All these attributes are private, not protected.
class Form
{
private:
	std::string name;
	bool t_bool;
	const int gradeRequiredInSign;
    const int gradeRequiredInExecute;
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

	Form();
    explicit Form(const std::string& name);
    explicit Form(int grade);
    Form(const std::string& name, int grade);
    Form(int gradeRequiredInSign, int gradeRequiredInExecute);
    Form(const std::string& name, int gradeRequiredInSign, int gradeRequiredInExecute);
    Form(const Form& a);
    ~Form();

    Form& operator=(const Form& a);

    const std::string& getName() const;
    bool getbool() const;
    int getGradeRequiredInSign() const;
    int getGradeRequiredInExecute() const;

    void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form &a);

#endif


