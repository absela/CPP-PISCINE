#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
    }
    return *this;
}

void ShrubberyCreationForm::action() const {
    std::ofstream outfile(_target + "_shrubbery");
    if (outfile.is_open() == false) {
        std::cout << "Error opening file" << std::endl;
        return;
    }
    std::cout << "tree created" << this->_target <<std::endl;
    outfile << "          ,ooxoo, \n\
          oxoxoo    ooxoo\n\
         ooxoxo oo  oxoxooo\n\
        oooo xxoxoo ooo ooox\n\
        oxo o oxoxo  xoxxoxo\n\
         oxo xooxoooo o ooo\n\
           ooo\\oo\\  /o/o\n\
              \\  \\/ /\n\
               |   /\n\
               |  |\n\
               | D|\n\
               |  |\n\
               |  |\n\
        ______/____\\____" << std::endl;
    outfile.close();
}

