#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    ShrubberyCreationForm();
    virtual void        action();
public:
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
};

#endif
