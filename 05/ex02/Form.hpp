#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		// Attributes
		std::string	name;
		bool		_signed;
		int		 	signeGrade;
		int		 	executeGrade;

		// Internal functions

	public:

		// Constructors and destructor
		Form(std::string name = "default", int signeGrade = 1, int executeGrade = 1);
		Form(const Form &src);
		virtual ~Form();

		// Operator overloads
		Form&	operator=(const Form &src);

		// Member functions
		std::string getName() const;
		bool		isSigned() const;
		int			getSigneGrade() const;
		int			getExecuteGrade() const;
		void		beSigned(Bureaucrat &bur);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		bool		canExecute(Bureaucrat const & executor) const;

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
		class NotSignedException : public std::exception {
			virtual const char *what() const throw() {
				return "NotSignedException";
			}
		} NotSignedException;
};

std::ostream&	operator<<( std::ostream& os, const Form& fixed );

#endif // FORM_HPP
