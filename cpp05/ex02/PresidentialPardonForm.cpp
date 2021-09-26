#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const std::string & name):
    Form(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
    Form(other.getName(), 25, 5)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    return *this;
}
