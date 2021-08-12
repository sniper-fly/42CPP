#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat
{
private:

public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(WrongCat const &other);
    WrongCat &operator=(WrongCat const &other);
};

#endif
