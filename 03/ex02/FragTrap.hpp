#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		// Operator overloads
		FragTrap&	operator=(const FragTrap &src);

		// Member functions
		void	highFivesGuys();
};

#endif // FRAGTRAP_HPP
