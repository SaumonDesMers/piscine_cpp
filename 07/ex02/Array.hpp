#ifndef ARRAY_HPP
# define ARRAY_HPP

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
			for (int i=0; i < _size; i++)
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
			for (int i=0; i < _size; i++)
				tab[i] = src[i];
		}

		T&	operator[](unsigned int i) {
			if (i > _size - 1)
				throw ;
			return tab[i];
		}

		// Member functions
		unsigned int	size() const {
			return _size;
		}
};

#endif // ARRAY_HPP
