#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\n-----ShrubberyCreationForm-----\n" << std::endl;
	try
	{
		Intern	intern;
		Form	*form = intern.makeForm("shrubbery creation", "garden");
		Bureaucrat	bob("Bob", 1);
		bob.signeForm(*form);
		bob.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----RobotomyRequestForm-----\n" << std::endl;
	try
	{
		Intern	intern;
		Form	*form = intern.makeForm("robotomy request", "a poor guy");
		Bureaucrat	bob("Bob", 1);
		bob.signeForm(*form);
		bob.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----PresidentialPardonForm-----\n" << std::endl;
	try
	{
		Intern	intern;
		Form	*form = intern.makeForm("presidential pardon", "a lucky guy");
		Bureaucrat	bob("Bob", 1);
		bob.signeForm(*form);
		bob.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----NotAForm-----\n" << std::endl;
	try
	{
		Intern	intern;
		Form	*form = intern.makeForm("not a form", "target");
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
