#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "An cat has been created\n";
	brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src.type) {
	std::cout << "An cat has been copied\n";
}

Cat::~Cat() {
	std::cout << "An cat is dead\n";
	delete brain;
}

Animal&	Cat::operator=(const Animal &src) {
	std::cout << "An Dog has been assignated\n";
	for (int i=0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
	return *this;
}

Cat&	Cat::operator=(const Cat &src) {
	std::cout << "An cat has been assignated\n";
	type = src.type;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "* Miaou *\n";
}

void	Cat::showIdeas(int index) const {
	if (index == -1)
		for (int i=0; i < 100; i++)
			std::cout << brain->getIdea(i) << std::endl;
	else
		std::cout << brain->getIdea(index) << std::endl;
}

std::string	Cat::getIdea(int index) const {
	return brain->getIdea(index);
}

void	Cat::setIdea(int index, std::string idea) {
	brain->setIdea(index, idea);
}
