#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap without name has been invoked\n";
}

DiamondTrap::DiamondTrap(const std::string name) : ScavTrap(name), FragTrap(name), _Name(name) {
	std::cout << "DiamondTrap " << name << " has been invoked\n";
	_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	std::cout << "DiamondTrap " << src._name << " has been copied\n";
	_Name = src._name;
	_name = src._name + "_clap_name";
	FragTrap::_hitPts = src.FragTrap::_hitPts;
	ScavTrap::_energyPts = src.ScavTrap::_energyPts;
	FragTrap::_attackDmg = src.FragTrap::_attackDmg;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _Name << " has been disintegrated\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &src) {
	_Name = src._name;
	_name = src._name + "_clap_name";
	FragTrap::_hitPts = src.FragTrap::_hitPts;
	ScavTrap::_energyPts = src.ScavTrap::_energyPts;
	FragTrap::_attackDmg = src.FragTrap::_attackDmg;
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap " << _Name << " is " << _name << "\n";

}

