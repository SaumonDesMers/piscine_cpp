#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		Cure(void);
		Cure(std::string const & type);
		Cure(const Cure &src);
		~Cure();

		// Operator overloads
		Cure&	operator=(const Cure &src);

		// Member functions
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif // CURE_HPP