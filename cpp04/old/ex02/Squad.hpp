#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad: public ISquad
{
private:

public:
    Squad();
    virtual ~Squad();
    Squad(Squad const &other);
    Squad &operator=(Squad const &other);

    int             getCount() const;
    ISpaceMarine*   getUnit(int) const;
    int             push(ISpaceMarine*);

private:
    int             units_count;
    ISpaceMarine    **units;
};

#endif
