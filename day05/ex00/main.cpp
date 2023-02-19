#include "Bureaucrat.hpp"

int main()
{
	try
	{
        Bureaucrat A("anass", 10);
		A.incrementGrade();
    	std::cout << A;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
	    Bureaucrat B("bsela", 130);
		B.decrementGrade();
	    std::cout << B;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}