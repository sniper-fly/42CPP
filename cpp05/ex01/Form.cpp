#include "Form.hpp"

Form::Form():name(""), grade_to_sign(1), grade_to_execute(1) { }

Form::~Form() { }

Form::Form(Form const &other):
    name(other.name),
    is_signed(other.is_signed),
    grade_to_sign(other.grade_to_sign),
    grade_to_execute(other.grade_to_execute)
{
    checkException();
}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        this->is_signed = other.is_signed;
    }
    return *this;
}

void                Form::checkException()
{
    if (grade_to_sign < 1 || grade_to_execute < 1) {
        throw Form::GradeTooHighException();
    } else if (grade_to_sign > 150 || grade_to_execute > 150) {
        throw Form::GradeTooLowException();
    }
}

Form::Form(std::string const &name, int grade_to_sign, int grade_to_execute):
    name(name),
    is_signed(false),
    grade_to_sign(grade_to_sign),
    grade_to_execute(grade_to_execute)
{
    checkException();
}

std::string const  &Form::getName() const { return name; }
bool                Form::getIsSigned() const { return is_signed; }
int const           Form::getGradeToSign() const { return grade_to_sign; }
int const           Form::getGradeToExecute() const { return grade_to_execute; }

void                Form::beSigned(Bureaucrat const & bur)
{
    if (bur.getGrade() > grade_to_sign) {
        throw Form::GradeTooLowException();
    }
    is_signed = true;
}

Form::GradeTooHighException::GradeTooHighException() {}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Error: GradeTooHighException: grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() {}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Error: GradeTooHighException: grade is too high";
}

std::ostream& operator<<(std::ostream &out, const Form &other)
{
    out
    << "Name: " << other.getName() << ", "
    << "Sign: " << other.getIsSigned() << ", "
    << "GradeToSign: " << other.getGradeToSign() << ", "
    << "GradeToExec: " << other.getGradeToExecute()
    << std::endl;
    return (out);
}
