#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:
        Form();
        Form(Form const & src);
        Form(std::string name, int gradeToSign, int gradeToExecute);
        ~Form();

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        Form &		operator=(Form const & rhs);

        std::string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat & bureaucrat);

    private:

    std::string _name;
    int _gradeSign;
    int _gradeExec;
    bool _isSigned;

};

std::ostream &		operator<<(std::ostream & o, Form const & i);

#endif