#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
    RobotomyRequestForm();
public:
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(std::string const &name);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
};

#endif
