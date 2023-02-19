#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _gradeSign(150), _gradeExec(150), _isSigned(false) {
}

AForm::AForm(AForm const & src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec), _isSigned(src._isSigned) {
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeSign(gradeToSign), _gradeExec(gradeToExecute), _isSigned(false) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm() {
}

AForm & AForm::operator=(AForm const & rhs) {
    if (this != &rhs) {
        _isSigned = rhs._isSigned;
    }
    return *this;
}

std::string AForm::getName() const {
    return _name;
}

int AForm::getGradeSign() const {
    return _gradeSign;
}

int AForm::getGradeExec() const {
    return _gradeExec;
}

bool AForm::getIsSigned() const {
    return _isSigned;
}

void AForm::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > _gradeSign)
        throw AForm::GradeTooLowException();
    _isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!_isSigned)
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > _gradeExec)
        throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, AForm const & i) {
    o << "Form " << i.getName() << " is ";
    if (!i.getIsSigned())
        o << "not ";
    o << "signed and requires grade " << i.getGradeSign() << " to sign and grade " << i.getGradeExec() << " to execute." << std::endl;
    return o;
}
