#include "Squad.hpp"

Squad::Squad()
{
}

Squad::~Squad()
{
}

Squad::Squad(Squad const &other)
{
    *this = other;
}

Squad &Squad::operator=(Squad const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
