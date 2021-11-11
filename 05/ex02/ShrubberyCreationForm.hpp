#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:

		// Attributes
		std::string	target;
		// std::string	name;
		bool		_signed;
		int		 	signeGrade;
		int		 	executeGrade;

		// Internal functions

	public:

		// Constructors and destructor
		ShrubberyCreationForm(std::string const &target = "default");
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		// Operator overloads
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &src);

		// Member functions
		void	execute(Bureaucrat const & executor) const;

};

#endif // SHRUBBERYCREATIONFORM_HPP
