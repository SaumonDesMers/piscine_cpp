#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

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
		~Animal();

		// Operator overloads
		Animal&	operator=(const Animal &src);

		// Member functions
		std::string	getType() const;
		virtual void	makeSound(void) const;

};

#endif // ANIMAL_HPP
