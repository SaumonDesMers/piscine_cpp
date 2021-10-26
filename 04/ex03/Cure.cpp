#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(std::string const &type) : AMateria(type) {}

Cure::Cure(const Cure &src) : AMateria("cure") {}

Cure::~Cure() {}

Cure&	Cure::operator=(const Cure &src) {
	type = src.getType();
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
