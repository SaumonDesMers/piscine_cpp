#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
	std::cout << "An Dog has been created\n";
	brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src.type) {
	std::cout << "An Dog has been copied\n";
}

Dog::~Dog() {
	std::cout << "An dog is dead\n";
	delete[] brain;
}

Dog&	Dog::operator=(const Dog &src) {
	std::cout << "An Dog has been assignated\n";
	type = src.type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "* Ouaf *\n";
}

void	Dog::showIdeas() const {
	for (int i=0; i < 100; i++)
		std::cout << brain->getIdea(i) << std::endl;
}
