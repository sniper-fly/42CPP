#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class Amateria
{
private:

public:
    Amateria();
    virtual ~Amateria();
    Amateria(Amateria const &other);
    Amateria &operator=(Amateria const &other);
};

#endif
