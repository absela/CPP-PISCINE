#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
    }
    return *this;
}

void PresidentialPardonForm::action() const {
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

