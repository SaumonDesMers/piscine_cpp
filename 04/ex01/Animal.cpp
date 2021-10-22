#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Undefined animal") {
	std::cout << "An undefined animal has been created\n";
}

Animal::Animal(const std::string typeName) : type(typeName) {}

Animal::Animal(const Animal &src) : type(src.type) {
	std::cout << "An undefined animal has been copied\n";
}

Animal::~Animal() {
	std::cout << "An undefined animal is dead\n";
}

Animal&	Animal::operator=(const Animal &src) {
	std::cout << "An undefined animal has been assignated\n";
	type = src.type;
	return *this;
}

std::string	Animal::getType() const {
	return type;
}

void	Animal::makeSound() const {
	std::cout << "* weird undefined sound *\n";
}

void	Animal::showIdeas(int index) const {
	std::cout << "There is no ideas here" << std::endl;
}
