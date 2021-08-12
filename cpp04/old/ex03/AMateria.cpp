#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &other)
{
    *this = other;
}

AMateria &AMateria::operator=(AMateria const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
