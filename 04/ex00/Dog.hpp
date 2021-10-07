#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		Dog(void);
		Dog(const Dog &src);
		~Dog();

		// Operator overloads
		Dog&	operator=(const Dog &src);

		// Member functions
		void	makeSound() const;

};

#endif // DOG_HPP
