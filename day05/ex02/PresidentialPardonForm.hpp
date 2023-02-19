#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();

        PresidentialPardonForm &		operator=(PresidentialPardonForm const & rhs);

        void action() const;

    private:
        std::string _target;
};

#endif