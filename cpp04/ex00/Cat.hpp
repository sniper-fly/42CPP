#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
private:

public:
    Cat();
    virtual ~Cat();
    Cat(Cat const &other);
    Cat &operator=(Cat const &other);

    virtual void    makeSound();
};

#endif
