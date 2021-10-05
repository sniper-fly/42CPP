#include "Intern.hpp"

Intern::Intern() { }

// TODO: これがメモリリークする？どう処理する？
Form* Intern::forms[TOTAL_FORMS] = {
    new PresidentialPardonForm(""),
    new RobotomyRequestForm(""),
    new ShrubberyCreationForm("")
};

Intern::~Intern() { }

Intern::Intern(Intern const &) { }

Intern &Intern::operator=(Intern const &)
{
    return *this;
}

Form*       Intern::makeForm(std::string name, std::string target)
{
    const int NUM_INSTANCES = 3;
    for (int i = 0; i < NUM_INSTANCES; ++i) {
        if (forms[i]->getName() == name) {
            std::cout << "Intern creates " << name << " form" << std::endl;
            return forms[i]->create_new(target);
        } 
    }
    std::cout << "There is no form named [" << name << "]" << std::endl;
    return NULL;
}

void        Intern::_delete_forms()
{
    for (int i = 0; i < TOTAL_FORMS; ++i) {
        delete forms[i];
        forms[i] = NULL;
    }
}

/*
実装方針
newでインスタンスを作成しForm*を格納する配列を作成する
名前キーを表示するメソッドを使ってnameリクエストとの一致を調べる
最後に開放する
*/
