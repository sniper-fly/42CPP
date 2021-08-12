#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &other);
    Animal &operator=(Animal const &other);

    std::string     getType();
    virtual void    makeSound();
};

#endif
