#ifndef CONVERTER_HPP
# define CONVERTER_HPP

class Converter
{
private:

public:
    Converter();
    virtual ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);
};

#endif
