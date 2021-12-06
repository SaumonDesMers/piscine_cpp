#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>
void	iter(T tab[], int len, T (f)(T x))
{
	for (int i=0; i < len; i++)
		tab[i] = f(tab[i]);
}

template <class T>
T	f(T x)
{
	return x;
}

template <class T>
void	test(T tab[], int len, T (f)(T x))
{
	std::cout << "before: ";
	for (int i=0; i < 4; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	iter(tab, len, f);
	std::cout << "after: ";
	for (int i=0; i < 4; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
}

#endif // ITER_HPP
