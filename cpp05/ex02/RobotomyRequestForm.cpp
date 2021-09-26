#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(std::string const &name):
    Form(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
    Form(other.getName(), 72, 45)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    return *this;
}
