#ifndef CAT_HPP
# define CAT_HPP

class Cat
{
private:

public:
    Cat();
    virtual ~Cat();
    Cat(Cat const &other);
    Cat &operator=(Cat const &other);
};

#endif
