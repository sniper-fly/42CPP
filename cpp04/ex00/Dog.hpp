#ifndef DOG_HPP
# define DOG_HPP

class Dog
{
private:

public:
    Dog();
    virtual ~Dog();
    Dog(Dog const &other);
    Dog &operator=(Dog const &other);
};

#endif
