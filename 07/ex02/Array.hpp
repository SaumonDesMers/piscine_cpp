#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <class T>
class Array {

	private:

		// Attributes
		unsigned int	_size;
		T				*tab;

		// Internal functions

	public:

		// Constructors and destructor
		Array(unsigned int i = 0) : _size(i) {
			tab = new T[i];
			for (unsigned int i=0; i < _size; i++)
				tab[i] = 0;
		}

		Array(const Array &src) {
			_size = src.size();
			tab = new T[_size];
			for (unsigned int i=0; i < _size; i++)
				tab[i] = src[i];
		}

		~Array() {
			delete[] tab;
		}

		// Operator overloads
		Array&	operator=(const Array &src) {
			delete[] tab;
			_size = src.size();
			tab = new T[_size];
			for (unsigned int i=0; i < _size; i++)
				tab[i] = src[i];
			return *this;
		}

		T&	operator[](unsigned int i) const {
			if (i > _size - 1)
				throw BadIndexExecption;
			return tab[i];
		}

		// Member functions
		unsigned int	size() const {
			return _size;
		}

		// Exception
		class BadIndexExecption : public std::exception {
			virtual const char *what() const throw() {
				return "BadIndexExecption";
			}
		} BadIndexExecption;
};

#endif // ARRAY_HPP
