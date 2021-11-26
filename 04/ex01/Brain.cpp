#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(void) {
	std::cout << "An brain has been created" << std::endl;
	for (int i=0; i < 100; i++)
	{
		std::stringstream ss;
		ss << i;
		ideas[i] = "Idea number " + ss.str();
	}
}

Brain::Brain(const Brain &src) {
	for (int i=0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
}

Brain::~Brain() {
	std::cout << "An brain has been deleted" << std::endl;
}

Brain&	Brain::operator=(const Brain &src) {
	for (int i=0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
	return *this;
}

std::string	Brain::getIdea(int i) const {
	if (i < 0 || i > 99)
		return "Wrong idea number";
	return ideas[i];
}

void	Brain::setIdea(int i, std::string str) {
	if (i < 0 || i > 99)
		std::cout << "Wrong idea number\n";
	else
		ideas[i] = str;
}
