#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade) {}

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
	{
		throw GradeTooHighException;
	}
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade + 1 > 150)
	{
		throw GradeTooLowException;
	}
	grade++;
}
