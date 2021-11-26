#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "-----ShrubberyCreationForm-----\n" << std::endl;
	try // peut signer et executer
	{
		Bureaucrat bur("esclave", 135);
		Form *form = new ShrubberyCreationForm("target_file");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try // peut signer mais pas executer
	{
		Bureaucrat bur("esclave", 140);
		Form *form = new ShrubberyCreationForm("target_file");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try // ne peut ni signer ni executer
	{
		Bureaucrat bur("esclave", 148);
		Form *form = new ShrubberyCreationForm("target_file");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try // ne peut pas executer car pas signe
	{
		Bureaucrat bur("esclave", 123);
		Form *form = new ShrubberyCreationForm("target_file");
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----RobotomyRequestForm-----\n" << std::endl;

	try // peut signer et executer
	{
		Bureaucrat bur("esclave", 23);
		Form *form = new RobotomyRequestForm("a random guy");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try // peut signer mais pas executer
	{
		Bureaucrat bur("esclave", 60);
		Form *form = new RobotomyRequestForm("a random guy");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try // ne peut ni signer ni executer
	{
		Bureaucrat bur("esclave", 88);
		Form *form = new RobotomyRequestForm("a random guy");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try // ne peut pas executer car pas signe
	{
		Bureaucrat bur("esclave", 33);
		Form *form = new RobotomyRequestForm("a random guy");
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----PresidentialPardonForm-----\n" << std::endl;

	try // peut signer et executer
	{
		Bureaucrat bur("esclave", 3);
		Form *form = new PresidentialPardonForm("a criminal");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try // peut signer mais pas executer
	{
		Bureaucrat bur("esclave", 15);
		Form *form = new PresidentialPardonForm("a criminal");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try // ne peut ni signer ni executer
	{
		Bureaucrat bur("esclave", 30);
		Form *form = new PresidentialPardonForm("a criminal");
		bur.signeForm(*form);
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try // ne peut pas executer car pas signe
	{
		Bureaucrat bur("esclave", 2);
		Form *form = new PresidentialPardonForm("a criminal");
		bur.executeForm(*form);
		delete form;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
