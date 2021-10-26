#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:

		// Attributes
		std::string		type;

		// Internal functions

	public:

		// Constructors and destructor
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &src);
		virtual ~AMateria();

		// Operator overloads
		AMateria&	operator=(const AMateria &src);

		// Member functions
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP