#include "Array.hpp"

Array::Array()
{
}

Array::~Array()
{
}

Array::Array(Array const &other)
{
    *this = other;
}

Array &Array::operator=(Array const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
