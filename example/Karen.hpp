#ifndef MEMBER_FUNC_HPP
#define MEMBER_FUNC_HPP

#include <iostream>

class Karen
{
public:
    Karen();
    ~Karen();
    static void    debug();
    void    (*fp)();
    void        complain(void);
};

#endif
