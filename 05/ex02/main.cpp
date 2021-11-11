#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat bur;
		Form *form = new ShrubberyCreationForm();
		bur.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
