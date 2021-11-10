#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form form1("form1", 53, 134);
		std::cout << form1 << std::endl;

		Form form2("form2", 0, 34);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----------------------------------------\n" << std::endl;
	try
	{
		Form form("form", 27, 10);
		std::cout << form << std::endl;

		Bureaucrat bur("esclave", 99);
		bur.signeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----------------------------------------\n" << std::endl;
	try
	{
		Form form("form", 37, 15);
		std::cout << form << std::endl;

		Bureaucrat bur("esclave", 4);
		bur.signeForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
