#include "Ice.hpp"

Ice::Ice()
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &other)
{
    *this = other;
}

Ice &Ice::operator=(Ice const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
