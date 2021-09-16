#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    // test exception
    for (int i = -2; i < 155; ++i) {
        try {
            Bureaucrat test(i, "test");
        } catch (std::exception & e) {
            std::cout << e.what() << ": " << i << std::endl;
        }
    }

    // test if << operator works
    std::cout << "--------------------------------" << std::endl;
    for (int i = 1; i < 10; ++i) {
        Bureaucrat test(i, "test2");
        std::cout << test << std::endl;
    }
}
