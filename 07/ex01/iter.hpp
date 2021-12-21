#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>
void	iter(T tab[], int len, void (f)(T x))
{
	for (int i=0; i < len; i++)
		f(tab[i]);
}

template <class T>
void	f(T x)
{
	std::cout << x << std::endl;
}

#endif // ITER_HPP
