#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &other);
    WrongAnimal &operator=(WrongAnimal const &other);

    std::string     getType() const;
    void            makeSound() const;
};

#endif
