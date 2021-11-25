#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	protected:
		int		_Scav_hitPts;
		int		_Scav_energyPts;
		int		_Scav_attackDmg;

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		// Operator overloads
		ScavTrap&	operator=(const ScavTrap &src);

		// Member functions
		void	attack(const std::string &target);
		void	guardGate();
};

#endif // SCAVTRAP_HPP
