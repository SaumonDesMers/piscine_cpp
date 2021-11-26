#include <iostream>
#include <fstream>
#include <string>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	Form(src), target(src.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	target = src.target;
	Form::operator=(src);
	return *this;
}

void	PresidentialPardonForm::doSomething() const {
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
