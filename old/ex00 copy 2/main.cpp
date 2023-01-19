#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "Bureaucrat.h"

int main()
{
	
    {
        PresidentialPardonForm pre("tag");
        Bureaucrat bru("bru", 1);

        // bru.signForm(pre);
        // bru.executeForm(pre);
        std::cout << bru << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

	return (0);
}

// Since you now have basic forms,
//  it’s time to make a few more that actually do something.
// In all cases, the base class Form must be an abstract class,
//  and therefore should be
// renamed AForm. 

// Keep in mind the form’s attributes need to
//  remain private and that
// they are in the base class.

// Add the following concrete classes:
// • ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working 
// directory, and writes ASCII trees
// inside it.

// • PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
// All of them take only one parameter in their constructor: the target of the form. For
// example, "home" if you want to plant shrubbery at home.

// Now, add the execute(Bureaucrat const & executor) const member function to
// the base form and implement a function to execute the form’s action of the concrete
// classes.
//  You have to check that the form is signed and that the grade of the bureaucrat
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
// Whether you want to check the requirements in every concrete class or in the base
// class (then call another function to execute the form) is up to you. However, one way is
// prettier than the other one.

// Lastly, add the executeForm(Form const & form) member function to the Bureaucrat. It must attempt to execute the form. If it’s successful, print something like:
// <bureaucrat> executed <form>
// If not, print an explicit error message.
// Implement and turn in some tests to ensure everything works as expected.
