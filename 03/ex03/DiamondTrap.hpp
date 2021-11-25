#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

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
		void	attack(const std::string &target);
		void	whoAmI();
		void	info() const;
};

#endif // DIAMONDTRAP_HPP
