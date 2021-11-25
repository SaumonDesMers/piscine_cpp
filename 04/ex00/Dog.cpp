#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
	std::cout << "A Dog has been created\n";
}

Dog::Dog(const Dog &src) : Animal(src.type) {
	std::cout << "A Dog has been copied\n";
}

Dog::~Dog() {
	std::cout << "A dog is dead\n";
}

Dog&	Dog::operator=(const Dog &src) {
	std::cout << "A Dog has been assignated\n";
	type = src.type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "* Ouaf *\n";
}
