#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	private:
			const std::string name;
			int grade;
			static const int MAX_GRADE = 1;
			static const int MIN_GRADE = 150;
	public:
			Bureaucrat();
			Bureaucrat(const std::string& name, int grade);
			Bureaucrat(const Bureaucrat& src);
			Bureaucrat& operator=(const Bureaucrat& src);	
			~Bureaucrat();

			const std::string& getName() const;
			int getGrade() const;
			void incrementGrade();
			void decrementGrade();			
						
			class GradeTooHighException : public std::exception
			{
				public:
						const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
						const char* what() const throw();
			};
};

std::ostream& operator<<(std::ostream& outputStream, const Bureaucrat& obj);

#endif


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
		explict GradeTooHighException(const char* message);
		virtual const char* what() const throw();
	}

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
    bool getIsSigned() const;
    int getGradeRequiredInSign() const;
    int getGradeRequiredInExecute() const;

    void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form &a);
	



// The grades of the Form follow the same rules that apply to
//  the Bureaucrat. Thus,
// the following exceptions will be thrown if a form grade is
//  out of bounds:
// Form::GradeTooHighException and Form::GradeTooLowException.
// Same as before, write getters for all attributes and an overload of the insertion («)
// operator that prints all the form’s informations.

// Add also a beSigned() member function to the Form that takes a Bureaucrat as
// parameter. It changes the form status to signed if the bureaucrat’s
//  grade is high enough
// (higher or egal to the required one). Remember, grade 1 is higher than grade 2.
// If the grade is too low, throw a Form::GradeTooLowException.
// Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
// it will print something like:
// <bureaucrat> signed <form>
// Otherwise, it will print something like:
// <bureaucrat> couldn’t sign <form> because <reason>.
// Implement and turn in some tests to ensure everything works as expected.

