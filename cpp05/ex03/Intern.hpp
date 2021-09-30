#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
private:

public:
    Intern();
    virtual ~Intern();
    Intern(Intern const &other);
    Intern &operator=(Intern const &other);
};

#endif

/*
Form* makeForm(std::string name, std::string target)
最初のパラメータで渡されたものに対応するFormクラスを返す
Intern creates <form> をプリントする
知らなかったらエラーメッセージを投げる
if/else if / else if は使っちゃダメらしい
*/
