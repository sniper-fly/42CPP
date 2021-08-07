#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

class AssaultTerminator
{
private:

public:
    AssaultTerminator();
    virtual ~AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &other);
    AssaultTerminator &operator=(AssaultTerminator const &other);
};

#endif
