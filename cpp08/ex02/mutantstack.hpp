#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

class Mutantstack
{
private:

public:
    Mutantstack();
    virtual ~Mutantstack();
    Mutantstack(Mutantstack const &other);
    Mutantstack &operator=(Mutantstack const &other);
};

#endif
