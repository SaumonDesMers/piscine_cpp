#include "span.hpp"

Span::Span(unsigned int const n) : sizeMax(n), len(0) {
	tab = new int[n];
	for (unsigned int i=0; i < sizeMax; i++)
		tab[i] = 0;
}

Span::Span(const Span &src) : sizeMax(src.sizeMax), len(src.len) {
	tab = new int[sizeMax];
	for (unsigned int i=0; i < sizeMax; i++)
		tab[i] = src.tab[i];
}

Span::~Span() {
	delete[] tab;
}

Span&	Span::operator=(const Span &src) {
	delete[] tab;
	sizeMax = src.sizeMax;
	len = src.len;
	tab = new int[sizeMax];
	for (unsigned int i=0; i < sizeMax; i++)
		tab[i] = src.tab[i];
	return *this;
}

void	Span::addNumber(int nb) {
	if (len == sizeMax)
		throw NoSpaceLeftException;
	tab[len - 1] = nb;
	len++;
}
