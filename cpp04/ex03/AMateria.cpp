#include "AMateria.hpp"

AMateria::AMateria(): type("")
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &other)
{
    *this = other;
}

AMateria::AMateria(std::string const & type): type(type) { }

AMateria &AMateria::operator=(AMateria const &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

std::string const & AMateria::getType() const
{
    return type;
}

void                AMateria::use(ICharacter& target)
{
    (void)target;
}
