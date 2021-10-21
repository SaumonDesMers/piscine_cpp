#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("Undefined Wrong animal") {
	std::cout << "An undefined Wrong animal has been created\n";
}

WrongAnimal::WrongAnimal(const std::string typeName) : type(typeName) {}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type) {
	std::cout << "An undefined Wrong animal has been copied\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "An undefined Wrong animal is dead\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "An undefined Wrong animal has been assignated\n";
	type = src.type;
	return *this;
}

std::string	WrongAnimal::getType() const {
	return type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "* weird undefined sound *\n";
}
