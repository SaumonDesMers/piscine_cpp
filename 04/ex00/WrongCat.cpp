#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("Wrong Cat") {
	std::cout << "An Wrong cat has been created\n";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src.type) {
	std::cout << "An Wrong cat has been copied\n";
}

WrongCat::~WrongCat() {
	std::cout << "An Wrong cat is dead\n";
}

WrongCat&	WrongCat::operator=(const WrongCat &src) {
	std::cout << "An Wrong cat has been assignated\n";
	type = src.type;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "* Miaou *\n";
}
