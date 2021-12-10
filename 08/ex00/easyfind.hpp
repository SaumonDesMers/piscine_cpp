#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>

class NotFoundException : public std::exception {
	virtual const char *what() const throw() {
		return "NotFoundException";
	}
} NotFoundException;

template<class T>
int const	&easyfind(T container, int val) {
	typename T::iterator it = find(container.begin(), container.end(), val);
	if (it == container.end())
		throw NotFoundException;
	return *it;
}

#endif // EASYFIND_HPP