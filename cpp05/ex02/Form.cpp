#include "Form.hpp"

Form::Form():name(""), grade_to_sign(1), grade_to_execute(1), target("") { }

Form::~Form() { }

Form::Form(Form const &other):
    name(other.name),
    is_signed(other.is_signed),
    grade_to_sign(other.grade_to_sign),
    grade_to_execute(other.grade_to_execute),
    target(other.target)
{
    checkException();
}

Form &Form::operator=(Form const &other)
{
    (void)other;
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

Form::Form(std::string const &name, int grade_to_sign, int grade_to_execute,
        std::string target):
    name(name),
    is_signed(false),
    grade_to_sign(grade_to_sign),
    grade_to_execute(grade_to_execute),
    target(target)
{
    checkException();
}

std::string const  &Form::getName() const { return name; }
bool                Form::getIsSigned() const { return is_signed; }
int                 Form::getGradeToSign() const { return grade_to_sign; }
int                 Form::getGradeToExecute() const { return grade_to_execute; }
std::string const & Form::getTarget() const { return target; }

void                Form::beSigned(Bureaucrat const & bur)
{
    if (bur.getGrade() > grade_to_sign) {
        throw Form::GradeTooLowException();
    }
    is_signed = true;
}

void                Form::execute(Bureaucrat const & executor)
{
    if (!is_signed) {
        throw UnsignedFormException();
    }
    if (executor.getGrade() > grade_to_execute) {
        throw GradeTooLowException();
    }
    action();
}

Form::GradeTooHighException::GradeTooHighException() {}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Error: GradeTooHighException: grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() {}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Error: GradeTooLowException: grade is too low";
}

Form::UnsignedFormException::UnsignedFormException() {}

const char* Form::UnsignedFormException::what() const throw()
{
    return "Error: UnsignedFormException: This Form is unsigned";
}

std::ostream& operator<<(std::ostream &out, const Form &other)
{
    out
    << "Name: " << other.getName() << ", "
    << "Sign: " << other.getIsSigned() << ", "
    << "GradeToSign: " << other.getGradeToSign() << ", "
    << "GradeToExec: " << other.getGradeToExecute() << ", "
    << "Target: " << other.getTarget();
    return (out);
}
