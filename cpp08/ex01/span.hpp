#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
private:

public:
    Span();
    virtual ~Span();
    Span(Span const &other);
    Span &operator=(Span const &other);
};

#endif
