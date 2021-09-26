#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const   name;
    bool                is_signed;
    int const           grade_to_sign;
    int const           grade_to_execute; // 特に用途なし

private:
    Form &operator=(Form const &other);
    void                checkException();
    virtual void        action() = 0;
public:
    Form();
    Form(Form const &other);
    Form(std::string const &name, int grade_to_sign, int grade_to_execute);
    virtual ~Form();

    std::string const  &getName() const;
    bool                getIsSigned() const;
    int                 getGradeToSign() const;
    int                 getGradeToExecute() const;

    void                beSigned(Bureaucrat const & bur);
    void                execute(Bureaucrat const & executor);

    class GradeTooHighException: public std::exception
    {
    public:
        GradeTooHighException();
        const char* what() const throw(); //無例外指定。この関数は例外を出さない。
    };

    class GradeTooLowException: public std::exception
    {
    public:
        GradeTooLowException();
        const char* what() const throw();
    };
    class UnsignedFormException: public std::exception
    {
    public:
        UnsignedFormException();
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const Form &other);

#endif
