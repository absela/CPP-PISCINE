#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(""), _gradeSign(150), _gradeExec(150), _isSigned(false)
{
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _isSigned(false)
{
    if(_gradeSign < 1 || _gradeExec < 1)
        throw GradeTooHighException();
    if(_gradeSign > 150 || _gradeExec > 150)
        throw GradeTooLowException();
}

Form::Form(Form const & src) {
    *this = src;
}

Form::~Form() {
}

Form &		Form::operator=(Form const & rhs) {
   if ( this != &rhs )
    {
        this->_isSigned = rhs._isSigned;
    }
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

int Form::getGradeSign() const {
    return this->_gradeSign;
}

int Form::getGradeExec() const {
    return this->_gradeExec;
}

bool Form::getIsSigned() const {
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw GradeTooLowException();
    this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}
