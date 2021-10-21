#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {

	protected:

		// Attributes
		std::string	type;

		// Internal functions

	public:

		// Constructors and destructor
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal(const std::string name);
		~WrongAnimal();

		// Operator overloads
		WrongAnimal&	operator=(const WrongAnimal &src);

		// Member functions
		std::string	getType() const;
		void	makeSound(void) const;

};

#endif // WrongANIMAL_HPP
