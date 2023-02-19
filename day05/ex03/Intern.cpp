#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const &src) {
    *this = src;
}

Intern &Intern::operator=(Intern const &rhs) {
    if (this != &rhs) {
    }
    return *this;
}

Intern::~Intern() {
}

AForm *Intern::makeForm(std::string formName, std::string target) {
    AForm *form = NULL;
    if (formName == "robotomy request") {
        form = new RobotomyRequestForm(target);
    } else if (formName == "presidential pardon") {
        form = new PresidentialPardonForm(target);
    } else if (formName == "shrubbery creation") {
        form = new ShrubberyCreationForm(target);
    } else {
        std::cout << "Intern cannot create form " << formName << std::endl;
    }
    return form;
}

const char *Intern::FormDoesNotExistException::what() const throw() {
    return "Form does not exist";
}


