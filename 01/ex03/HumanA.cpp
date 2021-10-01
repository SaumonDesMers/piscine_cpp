#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& newWeapon ) : name(name), weapon(newWeapon) {}

HumanA::~HumanA() {}

void	HumanA::setWeapon( Weapon& newWeapon ) {
	weapon = newWeapon;
}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with his " << weapon.getType() << "\n";
}