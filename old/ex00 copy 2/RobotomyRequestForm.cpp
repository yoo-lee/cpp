#include "RobotomyRequestForm.h"

void RobotomyRequestForm::action() const
{
    if (rand() % 2)
    {
        std::cout << "buzz-buzz... " << getTarget() << " has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "buzz-buzz... " << getTarget() << " has failed to make robotomized." << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
    : AForm(obj) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
    return *this;
}
