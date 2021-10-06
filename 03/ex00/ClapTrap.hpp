#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	private:

		// Attributes
		std::string		_name;
		int				_hitPts;
		int				_energyPts;
		int				_attackDmg;

		// Internal functions

	public:

		// Constructors and destructor
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();

		// Operator overloads
		ClapTrap&	operator=(const ClapTrap &src);

		// Member functions
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP
