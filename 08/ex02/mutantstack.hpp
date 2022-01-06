#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <exception>
#include <iterator>
#include <algorithm>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {

	private:

		// Attributes

		// Internal functions

	public:

		// Constructors and destructor
		MutantStack(void) : std::stack<T>() {}
		MutantStack(const MutantStack &src) : std::stack<T>(src) {}
		~MutantStack() {}

		// Operator overloads
		MutantStack&	operator=(const MutantStack &src);

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