#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    if (this != &rhs) {
        _grade = rhs._grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::singForm(AForm & form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::incrementGrade() {
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i) {
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
    return o;
}
