#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"


int main()
{

    Intern intern;

    AForm *form1;
    AForm *form2;
    AForm *form3;
    std::cout <<"====create forms" <<std::endl;
    try
    {
        Bureaucrat foo("foo", 5);
        Bureaucrat bar("bar", 15);
        Bureaucrat foobar("foobar", 1);
        form1 = intern.makeForm("shrubbery creation", "1337");
        form2 = intern.makeForm("robotomy request", "1338");
        form3 = intern.makeForm("presidential pardon", "1339");
        std::cout <<"====singe the form"<<std::endl;
        foo.singForm(*form1);
        bar.singForm(*form2);
        foobar.singForm(*form3);
        std::cout << "====execute the form"<<std::endl;
        foo.executeForm(*form1);
        bar.executeForm(*form2);
        foobar.executeForm(*form3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}
