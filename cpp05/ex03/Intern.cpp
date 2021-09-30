#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
