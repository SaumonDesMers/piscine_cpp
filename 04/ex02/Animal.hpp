#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal {

	protected:

		// Attributes
		std::string	type;

		// Internal functions

	public:

		// Constructors and destructor
		Animal(void);
		Animal(const Animal &src);
		Animal(const std::string name);
		virtual ~Animal();

		// Operator overloads
		virtual Animal&	operator=(const Animal &src);

		// Member functions
		std::string		getType() const;
		virtual std::string	getIdea(int index) const = 0;
		virtual void	setIdea(int index, std::string idea) = 0;
		virtual void	makeSound(void) const = 0;
		virtual void	showIdeas(int index = -1) const = 0;

};

#endif // ANIMAL_HPP