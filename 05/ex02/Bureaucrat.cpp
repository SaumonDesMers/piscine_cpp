#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int newGrade) : name(name) {
	if (newGrade < 1)
		throw GradeTooHighException;
	if (newGrade > 150)
		throw GradeTooLowException;
	grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.getName()), grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src) {
	name = src.getName();
	grade = src.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const {
	return name;
}

int		Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::incrementGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException;
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException;
	grade++;
}

void	Bureaucrat::signeForm(Form &form) {
	try
	{
		form.beSigned(*this);
		std::cout << name << " signs " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << name << " cannot sign because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form) {
	try
	{
		form.execute(*this);
		std::cout << name << " execute " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << name << " cannot execute because " << e.what() << std::endl;
	}
}
