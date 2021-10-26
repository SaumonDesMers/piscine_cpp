#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:

		// Attributes
		AMateria		*materia[4];

		// Internal functions

	public:

		// Constructors and destructor
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource();

		// Operator overloads
		MateriaSource&	operator=(const MateriaSource &src);

		// Member functions
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP