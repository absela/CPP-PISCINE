#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & rhs);

        void action() const;

    private:
        std::string _target;
};

#endif