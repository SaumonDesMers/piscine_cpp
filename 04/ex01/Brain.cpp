#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(void) {
	for (int i=0; i < 100; i++)
	{
		std::stringstream ss;
		ss << i;
		ideas[i] = "Idea number " + ss.str();
	}
}

Brain::Brain(const Brain &src) {}

Brain::~Brain() {}

Brain&	Brain::operator=(const Brain &src) {}

std::string	Brain::getIdea(int i) const {
	if (i < 0 || i > 99)
		return "Wrong idea number";
	return ideas[i];
}

void	Brain::setIdea(int i, std::string str) {
	if (i < 0 || i > 99)
		std::cout << "Wrong idea number\n";
	ideas[i] = str;
}
