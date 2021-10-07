#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:

		// Attributes
		std::string		_Name;

		// Internal functions

	public:

		// Constructors and destructor
		DiamondTrap(void);
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();

		// Operator overloads
		DiamondTrap&	operator=(const DiamondTrap &src);

		// Member functions
		void	whoAmI();

};

#endif // DIAMONDTRAP_HPP
