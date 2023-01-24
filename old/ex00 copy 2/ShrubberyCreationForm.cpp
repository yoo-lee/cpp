#include "ShrubberyCreationForm.h"


void ShrubberyCreationForm::action() const
{
	std::string str = ".\n"
"|-- Bureaucrat.cpp\n"
"|-- Bureaucrat.h\n"
"|-- AForm.cpp      \n"
"|-- AForm.hpp      \n"
"|-- Makefile      \n"
"|-- PresidentialPardonForm.cpp\n"
"|-- PresidentialPardonForm.h\n"
"|-- RobotomyRequestForm.cpp\n"
"|-- RobotomyRequestForm.h\n"
"|-- ShrubberyCreationForm.cpp\n"
"|-- ShrubberyCreationForm.h\n"
"`-- main.cpp\n";

std::ofstream ofs(getName() + "_shrubbery");
if(ofs)
{
	throw std::runtime_error("The file could not open");
}
ofs << str;
if (ofs.fail())
{
	throw std::runtime_error("could not wirte to the file");
}

}

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a)
    : AForm(a) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
    return *this;
}
