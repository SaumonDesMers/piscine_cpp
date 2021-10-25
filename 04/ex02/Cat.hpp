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
		Animal&	operator=(const Animal &src);
		Cat&	operator=(const Cat &src);

		// Member functions
		void		makeSound() const;
		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);
		void		showIdeas(int index = -1) const;

};

#endif // CAT_HPP
