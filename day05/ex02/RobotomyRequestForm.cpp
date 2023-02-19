#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
    }
    return *this;
}

void RobotomyRequestForm::action() const {
    static int i = 0;
    if (i % 2 == 0) {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << _target << " has been robotomized unsuccessfully" << std::endl;
    }
    i++;
}