#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:

		// Attributes
		Brain	*brain;

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
		virtual void	showIdeas(int index = -1) const;

};

#endif // CAT_HPP
