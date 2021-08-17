#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include "Brain.hpp"

class Animal
{
protected:
    std::string type;
    Brain*      brain;
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &other);
    Animal &operator=(Animal const &other);

    std::string const   &getType() const;
    virtual void        makeSound() const;
    Brain               *getBrain() const;
};

#endif
