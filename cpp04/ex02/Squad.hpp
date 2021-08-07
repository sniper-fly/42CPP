#ifndef SQUAD_HPP
# define SQUAD_HPP

class Squad
{
private:

public:
    Squad();
    virtual ~Squad();
    Squad(Squad const &other);
    Squad &operator=(Squad const &other);
};

#endif
