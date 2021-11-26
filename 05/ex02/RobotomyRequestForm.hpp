#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:

		// Attributes
		std::string	target;

		// Internal functions

	public:

		// Constructors and destructor
		RobotomyRequestForm(std::string const &target = "default");
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();

		// Operator overloads
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &src);

		// Member functions
		void	doSomething() const;

};

#endif // ROBOTOMYREQUESTFORM
