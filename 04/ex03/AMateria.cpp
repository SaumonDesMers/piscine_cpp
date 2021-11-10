#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria &src) : type(src.getType()) {}

AMateria::~AMateria() {}

AMateria&	AMateria::operator=(const AMateria &src) {
	type = src.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "No use for default AMateria" << std::endl;
}
