#ifndef CURE_HPP
# define CURE_HPP

class Cure
{
private:

public:
    Cure();
    virtual ~Cure();
    Cure(Cure const &other);
    Cure &operator=(Cure const &other);
};

#endif
