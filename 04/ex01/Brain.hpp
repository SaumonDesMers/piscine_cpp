#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {

	private:

		// Attributes
		std::string	ideas[100];

		// Internal functions

	public:

		// Constructors and destructor
		Brain(void);
		Brain(const Brain &src);
		~Brain();

		// Operator overloads
		Brain&	operator=(const Brain &src);

		// Member functions
		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string);

};

#endif // BRAIN_HPP
