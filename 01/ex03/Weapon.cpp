#include <string>
#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ) : type(weapon) {}
Weapon::Weapon( void ) {}

Weapon::~Weapon() {}

void	Weapon::setType( std::string weapon ) {
	type = weapon;
}

const std::string&	Weapon::getType( void ) {
	return type;
}

