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

		// Iterator
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }
		reverse_iterator rbegin(void) { return this->c.rbegin(); }
		reverse_iterator rend(void) { return this->c.rend(); }

};

#endif // MUTANTSTACK_HPP