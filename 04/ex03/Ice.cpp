#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(std::string const &type) : AMateria(type) {}

Ice::Ice(const Ice &src) : AMateria("ice") {}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice &src) {
	type = src.getType();
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
