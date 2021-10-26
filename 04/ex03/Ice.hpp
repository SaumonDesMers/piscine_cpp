#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		Ice(void);
		Ice(std::string const & type);
		Ice(const Ice &src);
		~Ice();

		// Operator overloads
		Ice&	operator=(const Ice &src);

		// Member functions
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif // ICE_HPP