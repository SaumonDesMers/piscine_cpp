#include "span.hpp"
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
	std::vector<int>::iterator	it = sorted.begin();

}

int		Span::longestSpan() {
	return *sorted.end() - *sorted.begin();
}
