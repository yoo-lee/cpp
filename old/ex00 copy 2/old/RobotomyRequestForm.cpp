#include "RobotomyRequestForm.h"


	RobotomyRequestForm(): AForm("", 72, 45), _target("")
	{
		if (RobotomyRequestForm::t_bool)
			std::cout << "Default constructor for Robotomy"
		return;
	}

	RobotomyRequestForm(const std::string &target)
	:AForm("", 72, 45), _target(target)
	{}

	RobotomyRequestForm(const RobotomyRequestForm &obj)
	: AForm("", 72, 45), _target(obj.getTarget())
	{
		if (RobotomyRequestForm::t_bool)
			std::cout << "Copy constructor for Robotomy";
		*this = obj;
		return;
	}

	RobotomyRequestForm &operator =(RobotomyRequestForm &obj)
	{
		std::cout << "Copy constructor for Robotomy" << std::endl;
		obj.getTarget();
		if (RobotomyRequestForm::t_bool)
			std::cout << "Assignment operator for Robo" << std::endl;
			return *this;
	}

	~RobotomyRequestForm()
	{
		if(RobotomyRequestForm::t_bool)
			std::cout << "Destrucor for Robotomy called" << endl;
		return;			
	}

	const std::string &getTarget() const
	{
		return this->_target;
	}

	void	execute(const Bureaucrat &executor ) const
	{
		this -> 
		std::cout << "* Brrrr drilling noises *" << std::end
	}
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