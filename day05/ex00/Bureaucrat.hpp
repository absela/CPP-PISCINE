#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat {

    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        Bureaucrat &		operator=(Bureaucrat const & rhs);

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

    private:

    std::string _name;
    int _grade;

};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & i);

#endif