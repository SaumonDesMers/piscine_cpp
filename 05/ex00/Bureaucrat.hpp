#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat {

	private:

		// Attributes
		std::string	name;
		int			grade;

		// Internal functions

	public:

		// Constructors and destructor
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		// Operator overloads
		Bureaucrat&	operator=(const Bureaucrat &src);

		// Member functions
		
};

#endif // BUREAUCRAT_HPP