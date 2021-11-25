#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#define FRAG_ATK 100

class FragTrap : virtual public ClapTrap {

	protected:
		int		_Frag_hitPts;
		int		_Frag_energyPts;
		int		_Frag_attackDmg;

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
		void	attack(const std::string &target);
		void	highFivesGuys();
};

#endif // FRAGTRAP_HPP
