#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") { }

Ice::~Ice()
{
}

Ice::Ice(Ice const &other)
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
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
