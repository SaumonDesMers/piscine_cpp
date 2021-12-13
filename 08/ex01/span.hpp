#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iterator>
#include <algorithm>
#include <vector>

class Span {

	private:

		// Attributes
		unsigned int		sizeMax;
		std::vector<int>	tab;
		std::vector<int>	sorted;

		// Internal functions

	public:

		// Constructors and destructor
		Span(unsigned int const n = 0);
		Span(const Span &src);
		~Span();

		// Operator overloads
		Span&	operator=(const Span &src);

		// Member functions
		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();
		void	geter();

		template<class iterator>
		void	addNumber(iterator first, iterator last) {
			if (std::distance(first, last) > sizeMax)
				throw NotEnoughSpaceException;
			tab.insert(tab.end(), first, last);
			std::vector<int>::iterator	ite;
			for (iterator it = first; it != last; it++)
			{
				ite = std::upper_bound(sorted.begin(), sorted.end(), *it);
				sorted.insert(ite, *it);
			}
		}

		// Exception
		class NotEnoughSpaceException : public std::exception {
			virtual const char *what() const throw() {
				return "NotEnoughSpaceException";
			}
		} NotEnoughSpaceException;

		class NotEnoughValueException : public std::exception {
			virtual const char *what() const throw() {
				return "NotEnoughValueException";
			}
		} NotEnoughValueException;
};

#endif // SPAN_HPP
