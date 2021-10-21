#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat();

		// Operator overloads
		WrongCat&	operator=(const WrongCat &src);

		// Member functions
		void	makeSound() const;

};

#endif // CAT_HPP
