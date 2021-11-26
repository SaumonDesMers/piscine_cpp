#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:

		// Attributes
		std::string	target;

		// Internal functions

	public:

		// Constructors and destructor
		ShrubberyCreationForm(std::string const &target = "default");
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		// Operator overloads
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &src);

		// Member functions
		void	doSomething() const;

};

#endif // SHRUBBERYCREATIONFORM_HPP
