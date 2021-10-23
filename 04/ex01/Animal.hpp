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
		Animal&	operator=(const Animal &src);

		// Member functions
		std::string		getType() const;
		virtual std::string	getIdea(int index) const;
		virtual void	setIdea(int index, std::string idea);
		virtual void	makeSound(void) const;
		virtual void	showIdeas(int index = -1) const;

};

#endif // ANIMAL_HPP
