#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &src) {
	(void)src;
}

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern &src) {
	(void)src;
	return *this;
}

Form*	Intern::makeForm(std::string const &name, std::string const &target) {
	std::string	formName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	// form_t	form[] = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};

	// form_t cur;

	// for (int i = 0; i < 3; i++)
	// {
	// 	cur = (form_t)form[i];
	// 	if (name==formName[i])
	// 		cur(target);
	// }

	// // for (int i=0; i<3; i++)
	// //  	if (name == formName[i])
	// //  		return (form[i](target));
	// std::cout << "This form doesn't exist" << std::endl;

	FormType  formList[] = {
        { "shrubbery creation", &Intern::createShrubberyCreationForm },
        { "robotomy request", &Intern::createRobotomyRequestForm },
        { "presidential pardon", &Intern::createPresidentialPardonForm }
    };

	return (NULL);
}

Form	*Intern::createShrubberyCreationForm(std::string const &target) {
	return new ShrubberyCreationForm(target);
}

Form	*Intern::createRobotomyRequestForm(std::string const &target) {
	return new RobotomyRequestForm(target);
}

Form	*Intern::createPresidentialPardonForm(std::string const &target) {
	return new PresidentialPardonForm(target);
}

