#include <iostream>
#include <sstream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("default"), grade(150) {
}

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

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& bur ) {
	std::stringstream ss;
	ss << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	os << ss.str();
	return os;
}
