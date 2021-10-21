#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "An cat has been created\n";
}

Cat::Cat(const Cat &src) : Animal(src.type) {
	std::cout << "An cat has been copied\n";
}

Cat::~Cat() {
	std::cout << "An cat is dead\n";
}

Cat&	Cat::operator=(const Cat &src) {
	std::cout << "An cat has been assignated\n";
	type = src.type;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "* Miaou *\n";
}
