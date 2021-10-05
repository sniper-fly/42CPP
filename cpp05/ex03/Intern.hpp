#ifndef INTERN_HPP
# define INTERN_HPP
#include "Form.hpp"
#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define TOTAL_FORMS 3

class Intern
{
private:
    static Form*        forms[TOTAL_FORMS];
    void                _delete_forms();
public:
    Intern();
    virtual ~Intern();
    Intern(Intern const &);
    Intern &operator=(Intern const &);

    Form*           makeForm(std::string name, std::string target);
};

#endif

/*
Form* makeForm(std::string name, std::string target)
最初のパラメータで渡されたものに対応するFormクラスを返す
Intern creates <form> をプリントする
知らなかったらエラーメッセージを投げる
if/else if / else if は使っちゃダメらしい
*/
