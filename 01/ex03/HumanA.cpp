#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, std::string newWeapon ) : name(name) {
	weapon.setType(newWeapon);
}

HumanA::~HumanA() {}

void	HumanA::setWeapon( std::string newWeapon ) {
	weapon.setType(newWeapon);
}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with his " << weapon.getType() << "\n";
}