#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template <class T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min(T a, T b)
{
	return a < b ? a : b;
}

template <class T>
T	max(T a, T b)
{
	return a > b ? a : b;
}

template <class T>
void	test(T a, T b, std::string type)
{
	std::cout << "---------- " << type << " ----------" << std::endl;
	std::cout << "first value:  " << a << std::endl;
	std::cout << "second value: " << b << std::endl;
	::swap(a, b);
	std::cout << "swap values" << std::endl;
	std::cout << "first value:  " << a << std::endl;
	std::cout << "second value: " << b << std::endl;
	std::cout << std::endl;
	std::cout << "min value: " << ::min(a, b) << std::endl;
	std::cout << "max value: " << ::max(a, b) << std::endl;
	std::cout << std::endl;
}

#endif // WHATEVER_HPP
