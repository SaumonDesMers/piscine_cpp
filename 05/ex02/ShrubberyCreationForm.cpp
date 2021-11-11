#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	target(target), _signed(false), signeGrade(145), executeGrade(137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	target(src.target), _signed(src._signed), signeGrade(src.signeGrade), executeGrade(src.executeGrade) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	target = src.target;
	_signed = src._signed;
	signeGrade = src.signeGrade;
	executeGrade = src.executeGrade;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try
	{
		canExecute(executor);
		std::cout << executor.getName() << "grow a tree" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
