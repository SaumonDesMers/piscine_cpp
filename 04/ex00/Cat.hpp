#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		Cat(void);
		Cat(const Cat &src);
		~Cat();

		// Operator overloads
		Cat&	operator=(const Cat &src);

		// Member functions
		void	makeSound() const;

};

#endif // CAT_HPP
