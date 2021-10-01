#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon( Weapon& newWeapon ) {
	weapon = &newWeapon;
}

void	HumanB::attack( void ) {
	std::cout << name << " attacks with his " << weapon->getType() << "\n";
}