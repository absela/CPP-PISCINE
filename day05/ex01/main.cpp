#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{

    std::cout << "-test1-"<<std::endl;
	try
	{
	    Form form("formule", 50, 50);
	    Bureaucrat test1("anass", 150);
		form.beSigned(test1);
	    test1.singForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    std::cout << "-test2-"<<std::endl;
	try
	{
        Form form("formule", 25, 50);
	    Bureaucrat test2("anass2", 10);
		form.beSigned(test2);
	    test2.singForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}