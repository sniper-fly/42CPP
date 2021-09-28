#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    /* *******previous test*******
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
    for (int i = 0; i < 155; ++i) {
        try {
            Form test("test", i, i - 2);
            std::cout << test << std::endl;
        } catch (std::exception & e) {
            std::cout
            << e.what() << ", "
            << "i: " << i << ", "
            << "i - 2: " << i - 2
            << std::endl;
        }
    }
    std::cout << "---------signForm test--------" << std::endl;
    Form five_form("five_form", 5, 10);
    Bureaucrat ten(10, "ten_man");
    ten.signForm(five_form);
    std::cout << "------------------------------" << std::endl;
    Bureaucrat five(5, "five_man");
    five.signForm(five_form);
    std::cout << five_form << std::endl;
    std::cout << "------------------------------" << std::endl;
    Form five_form2("five_form", 5, 10);
    Bureaucrat four(4, "five_man");
    four.signForm(five_form2);
    std::cout << five_form2 << std::endl;
    */

    PresidentialPardonForm hoge("hoge");
    Bureaucrat bur(5, "a");
    bur.signForm(hoge);
    hoge.execute(bur);


    /*
    target変数が実装されていない。どこで使うのかよくわかっていないのでよく調べて方針を立てる
    execute関数はformで実装しているので、各Formファイルでactionの関数を実装すれば良い
    signにgradeが足りないのか、execにgradeが足りないのかわかりづらいので例外を増やしても良いかもしれない
    */
}
