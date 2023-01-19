#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <fstream>
#include "AForm.h"

class ShrubberyCreationForm : public AForm
{
private:
    virtual void action() const;

public:
    ShrubberyCreationForm();
    explicit ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& a);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
};

#endif