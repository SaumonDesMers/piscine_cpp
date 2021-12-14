#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <exception>
#include <iterator>
#include <algorithm>
#include <stack>

template<class T>
class Mutantstack : public std::stack<T> {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		Mutantstack(void) : std::stack<T>() {}
		Mutantstack(const Mutantstack &src) : std::stack<T>(src) {}
		~Mutantstack();

		// Operator overloads
		Mutantstack&	operator=(const Mutantstack &src);

		// Member functions

};

#endif // MUTANTSTACK_HPP