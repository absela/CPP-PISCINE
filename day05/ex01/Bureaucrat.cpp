#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if(_grade < 1)
        throw GradeTooLowException();
    if(_grade > 150)
        throw GradeTooHighException();

}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    *this = src;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs) {
   if ( this != &rhs )
	{
		this->_grade = rhs._grade;
		if(this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if(this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	return *this;
}

void Bureaucrat::singForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}
std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & i) {
    o << i.getName() << ", bureaucrat grade " << i.getGrade();
    return o;
}

