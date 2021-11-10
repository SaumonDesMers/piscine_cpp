#include <sstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) : name("default"), _signed(false), signeGrade(1), executeGrade(1) {}

Form::Form(std::string name, int newSigneGrade, int newExecuteGrade) : name(name), _signed(false) {
	if (newSigneGrade < 1 || newExecuteGrade < 1)
		throw GradeTooHighException;
	if (newSigneGrade > 150 || newExecuteGrade > 150)
		throw GradeTooLowException;
	signeGrade = newSigneGrade;
	executeGrade = newExecuteGrade;
}

Form::Form(const Form &src) : name(src.name), _signed(src._signed), signeGrade(src.signeGrade),
	executeGrade(src.executeGrade) {}

Form::~Form() {}

Form&	Form::operator=(const Form &src) {
	name = src.name;
	_signed = src._signed;
	signeGrade = src.signeGrade;
	executeGrade = src.executeGrade;
	return *this;
}

std::string Form::getName() const {
	return name;
}

bool Form::isSigned() const {
	return _signed;
}

int Form::getSigneGrade() const {
	return signeGrade;
}

int Form::getExecuteGrade() const {
	return executeGrade;
}

void	Form::beSigned(Bureaucrat &bur) {
	if (bur.getGrade() > signeGrade)
		throw GradeTooLowException;
	_signed = true;
}

std::ostream&	operator<<( std::ostream& os, const Form& form ) {
	
	std::stringstream ss;
	ss << "{Form " << form.getName() << ", " << (form.isSigned() ? "signed": "not signed")
		<< ", required grade to signe: " << form.getSigneGrade() << ", required grade to execute: "
		<< form.getExecuteGrade() << "}";
	os << ss.str();
	return os;
}