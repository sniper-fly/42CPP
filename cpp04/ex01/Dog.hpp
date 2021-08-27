#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    virtual ~Dog();
    Dog(Dog const &other);
    Dog &operator=(Dog const &other);

    virtual void    makeSound() const;
    std::string const     &getBrainIdea(int) const;
};

#endif
