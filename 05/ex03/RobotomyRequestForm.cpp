#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	Form(src), target(src.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	target = src.target;
	Form::operator=(src);
	return *this;
}

void	RobotomyRequestForm::doSomething() const {
	std::srand(std::time(NULL));
	std::cout << "* drilling noises *" << std::endl;
	if (std::rand() < RAND_MAX / 2)
	{
		std::cout << target << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "Fail to robotomize " << target << std::endl;
	}
}
