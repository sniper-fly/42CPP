#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:

public:
    ShrubberyCreationForm();
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &name);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
};

#endif
