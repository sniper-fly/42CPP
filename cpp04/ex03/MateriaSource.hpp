#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource
{
private:

public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource &operator=(MateriaSource const &other);
};

#endif
