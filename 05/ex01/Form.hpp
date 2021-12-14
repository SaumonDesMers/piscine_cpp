#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		// Attributes
		const std::string	name;
		bool				_signed;
		const int			signeGrade;
		const int			executeGrade;

		// Internal functions

	public:

		// Constructors and destructor
		Form(void);
		Form(std::string name, int signeGrade, int executeGrade);
		Form(const Form &src);
		~Form();

		// Operator overloads
		Form&	operator=(const Form &src);

		// Member functions
		std::string getName() const;
		bool		isSigned() const;
		int			getSigneGrade() const;
		int			getExecuteGrade() const;
		void		beSigned(Bureaucrat &bur);

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

std::ostream&	operator<<( std::ostream& os, const Form& form );

#endif // FORM_HPP
