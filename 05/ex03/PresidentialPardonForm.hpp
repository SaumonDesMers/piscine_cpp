#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:

		// Attributes
		std::string	target;

		// Internal functions

	public:

		// Constructors and destructor
		PresidentialPardonForm(std::string const &target = "default");
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();

		// Operator overloads
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &src);

		// Member functions
		void	doSomething() const;

};

#endif // PRESIDENTIALPARDONFORM_HPP
