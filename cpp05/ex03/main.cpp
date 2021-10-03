#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern intern;
    int tests[] = {0, 1, 5, 25, 45, 72, 137, 145, 150, 151} ;
    int len = 10;
    for (int i = 0; i < len; ++i) {
        try {
            std::cout << "==============================" << std::endl;
            std::cout << "test case:" << tests[i] << std::endl;
            std::cout << "==============================" << std::endl;
            Bureaucrat bur(tests[i], "bur");
            Form *pre = intern.makeForm("presidential pardon", "pre");
            Form *robo = intern.makeForm("robotomy request", "robo");
            Form *shrube = intern.makeForm("shrubbery creation", "shrube");

            bur.signForm(*shrube);
            shrube->execute(bur);
            std::cout << "--------------------" << std::endl;
            bur.signForm(*robo);
            robo->execute(bur);
            std::cout << "--------------------" << std::endl;
            bur.signForm(*pre);
            pre->execute(bur);
            std::cout << std::endl;

            delete pre;
            delete robo;
            delete shrube;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
            std::cout << std::endl;
        }
    }

    Intern::_delete_forms();
}

/* TODO
メモリリークの対処
*/
