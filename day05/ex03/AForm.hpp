#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public :
        AForm();
        AForm(AForm const & src);
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        ~AForm();

        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw()
                {
                    return "Grade too high";
                }
        };

        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw()
                {
                    return "Grade too low";
                }
        };

        AForm &		operator=(AForm const & rhs);

        std::string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat & bureaucrat);
        void execute(Bureaucrat const & executor) const;

    private:
        std::string _name;
        int _gradeSign;
        int _gradeExec;
        bool _isSigned;

};

std::ostream &		operator<<(std::ostream & o, AForm const & i);

#endif