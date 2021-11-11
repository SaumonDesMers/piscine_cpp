#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

	private:

		// Attributes
		std::string	name;
		int			grade;

		// Internal functions

	public:

		// Constructors and destructor
		Bureaucrat(std::string const &name = "default", int grade = 150);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		// Operator overloads
		Bureaucrat&	operator=(const Bureaucrat &src);

		// Member functions
		std::string getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signeForm(Form &form);
		void		executeForm(Form const &form);

		// Exception
		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw() {
				return "GradeTooHighException";
			}
		} GradeTooHighException;
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw() {
				return "GradeTooLowException";
			}
		} GradeTooLowException;
};

#endif // BUREAUCRAT_HPP