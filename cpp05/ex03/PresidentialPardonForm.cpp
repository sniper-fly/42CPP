#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const std::string & target):
    Form("PresidentialPardon", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &other):
    Form(other.getName(), 25, 5, other.getTarget())
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    (void)other;
    return *this;
}

void                PresidentialPardonForm::action()
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}


Form*               PresidentialPardonForm::create_new(
    std::string const &target) const
{
    return new PresidentialPardonForm(target);
}
