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
