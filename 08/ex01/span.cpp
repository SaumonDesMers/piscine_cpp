#include "span.hpp"
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

Span::Span(unsigned int const n) : sizeMax(n) {}

Span::Span(const Span &src) : sizeMax(src.sizeMax) {
	tab = src.tab;
	sorted = src.sorted;
}

Span::~Span() {}

Span&	Span::operator=(const Span &src) {
	sizeMax = src.sizeMax;
	tab = src.tab;
	sorted = src.sorted;
	return *this;
}

void	Span::addNumber(int nb) {
	if (tab.size() == sizeMax)
		throw NotEnoughSpaceException;
	tab.push_back(nb);
	std::vector<int>::iterator	it = std::upper_bound(sorted.begin(), sorted.end(), nb);
	sorted.insert(it, nb);
}

int		Span::shortestSpan() {
	if (tab.size() < 2)
		throw NotEnoughValueException;
	std::vector<int>::iterator	it1 = sorted.begin(), it2 = it1, it_end = --sorted.end();
	int	shortest_span = *(++it1) - *it2;
	int	delta;
	while (++it2 != it_end)
	{
		delta = *(++it1) - *(it2);
		shortest_span = delta < shortest_span ? delta : shortest_span;
	}
	return shortest_span;
}

int		Span::longestSpan() {
	if (tab.size() < 2)
		throw NotEnoughValueException;
	return *(--sorted.end()) - *sorted.begin();
}

void	Span::geter() {
	std::cout << "tab: ";
	for (unsigned int i=0; i < tab.size(); i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	std::cout << "sorted: ";
	for (unsigned int i=0; i < sorted.size(); i++)
		std::cout << sorted[i] << " ";
	std::cout << std::endl;
}
