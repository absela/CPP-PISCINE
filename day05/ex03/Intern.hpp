#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        Intern &operator=(Intern const &rhs);
        ~Intern();
        AForm           *makeForm(std::string form, std::string target);
        class FormDoesNotExistException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif