#ifndef CHARATER_HPP
# define CHARATER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

	private:

		// Attributes
		std::string		name;
		AMateria		*materia[4];

		// Internal functions

	public:

		// Constructors and destructor
		Character(void);
		Character(std::string const &name);
		Character(const Character &src);
		~Character();

		// Operator overloads
		Character&	operator=(const Character &src);

		// Member functions
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // CHARATER_HPP