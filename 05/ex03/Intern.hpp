#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string.h>

class Intern;

typedef Form* (Intern::*createForm)(const std::string&);

class Intern {

	private:

		// Internal functions
		Form	*createShrubberyCreationForm(std::string const &target);
		Form	*createRobotomyRequestForm(std::string const &target);
		Form	*createPresidentialPardonForm(std::string const &target);
		
		// Attributes
		static createForm form[3];

	public:

		// Constructors and destructor
		Intern(void);
		Intern(const Intern &src);
		~Intern();

		// Operator overloads
		Intern&	operator=(const Intern &src);

		// Member functions
		Form*	makeForm(std::string const &name, std::string const &target);

};

#endif // INTERN_HPP
