#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
private:

public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &other);
    Animal &operator=(Animal const &other);
};

#endif
