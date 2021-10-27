#include "span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(Span const &other)
{
    *this = other;
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
