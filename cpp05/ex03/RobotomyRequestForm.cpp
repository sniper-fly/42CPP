#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
    Form("RobotomyRequest", 72, 45, target)
{
    srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
    Form("RobotomyRequest", 72, 45, other.getTarget())
{
    srand(time(0));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    (void)other;
    return *this;
}

void        RobotomyRequestForm::action()
{
    std::cout
    << "***!**;*d*!**@**@*!**g**$***#**z****&**v**+****~***..." << std::endl;
    if (rand() % 2) {
        std::cout
        << getTarget() << " has been robotomized successfully 50% of the time."
        << std::endl;
    } else {
        std::cout << "Robotomizing failure." << std::endl;
    }
}

Form*       RobotomyRequestForm::create_new(std::string const &target) const
{
    return new RobotomyRequestForm(target);
}
