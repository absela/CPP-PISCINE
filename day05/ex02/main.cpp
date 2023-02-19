#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{

	{
        Bureaucrat bureaucrat("aaaaaaaaa", 115);
        ShrubberyCreationForm shrubbery("home");
        std::cout << std::endl;
        bureaucrat.executeForm(shrubbery);
        bureaucrat.singForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
        std::cout << std::endl;
    }


    {
        Bureaucrat bureaucrat("bbbbbbbbb", 10);
        PresidentialPardonForm autoRoute("autoroute");
        bureaucrat.singForm(autoRoute);
        bureaucrat.executeForm(autoRoute);
        std::cout << std::endl;
    }


    {
        std::cout << std::endl;
        Bureaucrat bureaucrat("ccccccccc", 1);
        RobotomyRequestForm robot("randomForm");
        bureaucrat.singForm(robot);
        bureaucrat.executeForm(robot);
        std::cout << std::endl;
    }
	return 0;
}