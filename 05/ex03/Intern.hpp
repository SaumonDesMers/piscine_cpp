#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <string.h>

class Intern {

	private:

		// Attributes

		Form	*createShrubberyCreationForm(std::string const &target);
		Form	*createRobotomyRequestForm(std::string const &target);
		Form	*createPresidentialPardonForm(std::string const &target);
		// Internal functions
		
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

typedef Form* (Intern::*createForm)(const std::string&);

struct FormType {

    public:
        const std::string   formName;
        createForm          formCreator;
};

#endif // INTERN_HPP
