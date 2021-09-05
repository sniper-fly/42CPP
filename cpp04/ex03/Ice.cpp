#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") { }

Ice::~Ice()
{
}

Ice::Ice(Ice const &other): AMateria(other.type)
{
    *this = other;
}

Ice::Ice(std::string const &type): AMateria(type) { }

Ice &Ice::operator=(Ice const &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

AMateria*           Ice::clone() const
{
    AMateria* copy = new Ice();
    return copy;
}

void                Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName()
    << " *" << std::endl;
}
