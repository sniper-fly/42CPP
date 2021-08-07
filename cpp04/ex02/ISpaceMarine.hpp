#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
private:

public:
    ISpaceMarine();
    virtual ~ISpaceMarine();
    ISpaceMarine(ISpaceMarine const &other);
    ISpaceMarine &operator=(ISpaceMarine const &other);

    virtual ISpaceMarine*   clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
};

#endif
