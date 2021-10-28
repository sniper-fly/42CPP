#include "mutantstack.hpp"

Mutantstack::Mutantstack()
{
}

Mutantstack::~Mutantstack()
{
}

Mutantstack::Mutantstack(Mutantstack const &other)
{
    *this = other;
}

Mutantstack &Mutantstack::operator=(Mutantstack const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
