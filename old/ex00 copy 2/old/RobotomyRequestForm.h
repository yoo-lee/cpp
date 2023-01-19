#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <fstream>
#include "AForm.h"
#include "Bureaucrat.h"

class RobotomyRequestForm
{
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm &operator =(RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	const std::string	&getTarget() const;
	virtual void	execute(const Bureaucrat &executor ) const;
	static bool t_bool;
	
	private:
	const std::string	_target;
	RobotomyRequestForm();
};
// • RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> 
// has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

#endif