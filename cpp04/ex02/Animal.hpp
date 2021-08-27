#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include "Brain.hpp"

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &other);
    Animal &operator=(Animal const &other);

    std::string const   &getType() const;
    virtual void        makeSound() const = 0;
};

#endif
