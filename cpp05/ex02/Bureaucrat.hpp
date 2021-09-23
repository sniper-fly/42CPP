#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const   name;
    int                 grade;

private:
    Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &other);
    Bureaucrat(Bureaucrat const &other);
    void                    assign_grade(int grade);
public:
    virtual ~Bureaucrat();
    Bureaucrat(int grade, std::string name);

    std::string const &     getName() const;
    int                     getGrade() const;
    void                    incrementGrade();
    void                    decrementGrade();

    void                    signForm(Form & form);

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
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other);

#endif
