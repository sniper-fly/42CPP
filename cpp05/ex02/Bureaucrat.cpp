#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

// 今回使用しない
Bureaucrat::Bureaucrat() { }
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    (void)other;
    return *this;
}
Bureaucrat::Bureaucrat(Bureaucrat const &other):
    name(other.name)
{
    assign_grade(other.grade);
}
//

void                    Bureaucrat::assign_grade(int grade)
{
    if (grade < 1) {
        this->grade = 1;
        throw GradeTooHighException();
    } else if (grade > 150) {
        this->grade = 150;
        throw GradeTooLowException();
    } else {
        this->grade = grade;
    }
}

Bureaucrat::Bureaucrat(int grade, std::string name): name(name)
{
    assign_grade(grade);
}

Bureaucrat::~Bureaucrat() { }

std::string const &     Bureaucrat::getName() const { return name; }
int                     Bureaucrat::getGrade() const { return grade; }

void                    Bureaucrat::incrementGrade() { assign_grade(grade - 1); }

void                    Bureaucrat::decrementGrade() { assign_grade(grade + 1); }

void                    Bureaucrat::signForm(Form& form)
{
    if (form.getIsSigned()) {
        std::cout << "Already signed form." << std::endl;
        return ;
    }
    if (grade <= form.getGradeToSign()) {
        std::cout
        << name
        << " signs "
        << form.getName()
        << " form"
        << std::endl;
        form.beSigned(*this);
    } else {
        std::cout
        << name
        << " cannot sign "
        << form.getName()
        << " form because the grade is not enough."
        << std::endl;
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error: GradeTooHighException: grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error: GradeTooLowException: grade is too low";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << "<" << other.getName() << ">, bureaucrat grade <" << other.getGrade()
    << ">.";

    return out;
}

/* TODO
各種コンストラクタなど
例外クラス実装
インクリメントなど
*/
