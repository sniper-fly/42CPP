#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character
{
private:

public:
    Character();
    virtual ~Character();
    Character(Character const &other);
    Character &operator=(Character const &other);
};

#endif
