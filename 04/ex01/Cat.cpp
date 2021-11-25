#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "A cat has been created\n";
	brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src.type) {
	std::cout << "A cat has been copied\n";
	type = src.type;
	for (int i=0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
}

Cat::~Cat() {
	std::cout << "A cat is dead\n";
	delete brain;
}

Animal&	Cat::operator=(const Animal &src) {
	std::cout << "A cat has been assignated\n";
	for (int i=0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
	return *this;
}

Cat&	Cat::operator=(const Cat &src) {
	std::cout << "A cat has been assignated\n";
	type = src.type;
	for (int i=0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
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
