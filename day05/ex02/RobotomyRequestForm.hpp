#ifndef ROPOTOMYREQUESTFORM_HPP
# define ROPOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();

        RobotomyRequestForm &		operator=(RobotomyRequestForm const & rhs);

        void action() const;

    private:
        std::string _target;
};

#endif