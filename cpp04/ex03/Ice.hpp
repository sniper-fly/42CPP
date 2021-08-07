#ifndef ICE_HPP
# define ICE_HPP

class Ice
{
private:

public:
    Ice();
    virtual ~Ice();
    Ice(Ice const &other);
    Ice &operator=(Ice const &other);
};

#endif
