#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iterator>

class Span {

	private:

		// Attributes
		unsigned int	sizeMax;
		unsigned int	len;
		int				*tab;

		// Internal functions

	public:

		// Constructors and destructor
		Span(unsigned int const n = 0);
		template<class iterator>
		Span(iterator begin, iterator end) {
			sizeMax = distance(begin, end);
			len = sizeMax;
			tab = new int[sizeMax];
			int	i = 0;
			while (begin != end)
				tab[i++] = *begin++;
		}
		Span(const Span &src);
		~Span();

		// Operator overloads
		Span&	operator=(const Span &src);

		// Member functions
		void	addNumber(int nb);

		// Exception
		class NoSpaceLeftException : public std::exception {
			virtual const char *what() const throw() {
				return "NoSpaceLeftException";
			}
		} NoSpaceLeftException;

		class NotEnoughValueException : public std::exception {
			virtual const char *what() const throw() {
				return "NotEnoughValueException";
			}
		} NotEnoughValueException;
};

#endif // SPAN_HPP
