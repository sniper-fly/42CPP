#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
