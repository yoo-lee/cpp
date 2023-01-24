#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <ctime>
#include <cstdlib>
#include "AForm.h"

class RobotomyRequestForm : public AForm
{
private:
    virtual void action() const;

public:
    RobotomyRequestForm();
    explicit RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& a);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
};

#endif
