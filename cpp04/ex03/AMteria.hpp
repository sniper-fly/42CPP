#ifndef AMTERIA_HPP
# define AMTERIA_HPP

class AMteria
{
private:

public:
    AMteria();
    virtual ~AMteria();
    AMteria(AMteria const &other);
    AMteria &operator=(AMteria const &other);
};

#endif
