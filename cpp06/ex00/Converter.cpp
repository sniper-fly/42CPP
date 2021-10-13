#include "Converter.hpp"

Converter::Converter()
{
}

Converter::~Converter()
{
}

Converter::Converter(Converter const &other)
{
    *this = other;
}

Converter &Converter::operator=(Converter const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
