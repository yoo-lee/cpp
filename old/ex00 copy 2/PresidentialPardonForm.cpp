#include "PresidentialPardonForm.h"

    void PresidentialPardonForm::action() const
	{
		std::cout << getTarget() << " has been Zafod Beeblebrox" << std::endl;
	}

    PresidentialPardonForm::PresidentialPardonForm()
	: AForm("", 25, 5) 
	{}

    PresidentialPardonForm::PresidentialPardonForm(const std::string& a)
	: AForm(a, 25, 5)
	{}
    
	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	: AForm(obj)
	{}

    PresidentialPardonForm::~PresidentialPardonForm()
	{}

    PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&)
	{
		return *this;
	}


// • PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
// All of them take only one parameter in their constructor: the target of the form. For
// example, "home" if you want to plant shrubbery at home.

// Now, add the execute(Bureaucrat const & executor) const member function to
// the base form and implement a function to 
// execute the form’s action of the concrete
// classes.
//  You have to check that the form is signed and that the grade
//  of the bureaucrat
// attempting to execute the form is high enough. 
// Otherwise, throw an appropriate exception.
// Whether you want to check the requirements in every concrete 
// class or in the base
// class (then call another function to execute the form) is up to you.
//  However, one way is
// prettier than the other one.
