#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <string>

class PresidentialPardonForm: public Form
{
private:
    PresidentialPardonForm();
    virtual void        action();
public:
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const std::string & target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

    virtual Form*       create_new(std::string const &target) const;
};

#endif
