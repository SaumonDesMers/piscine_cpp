#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	private:

		// Attributes
		std::string	_name;
		int			_hitoints;
		int			_energyPoints;
		int			_attackDmg;

		// Internal functions

	public:

		// Constructors and destructor
		ClapTrap(void);
		ClapTrap(const ClapTrap &src);
		ClapTrap(const std::string &name);
		~ClapTrap();

		// Operator overloads
		ClapTrap&	operator=(const ClapTrap &rhs);

		// Member functions

};

#endif // CLAPTRAP_HPP
