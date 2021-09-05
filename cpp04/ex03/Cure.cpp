#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure") { }


Cure::~Cure()
{
}

Cure::Cure(Cure const &other): AMateria(other.type)
{
    *this = other;
}

Cure::Cure(std::string const &type): AMateria(type) { }

Cure &Cure::operator=(Cure const &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

AMateria*           Cure::clone() const
{
    AMateria* copy = new Cure();
    return copy;
}

void                Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
