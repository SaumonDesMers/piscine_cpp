#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat {

	private:

		// Attributes
		const std::string	name;
		int					grade;

		// Internal functions

	public:

		// Constructors and destructor
		Bureaucrat(void);
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		// Operator overloads
		Bureaucrat&	operator=(const Bureaucrat &src);

		// Member functions
		std::string getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

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

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& bur );

#endif // BUREAUCRAT_HPP