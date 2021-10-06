#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap without name has been animated\n";
	_hitPts = 100; _energyPts = 50; _attackDmg = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " has been animated\n";
	_hitPts = 100; _energyPts = 50; _attackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src._name) {
	std::cout << "ScavTrap " << src._name << " has been copied\n";
	_hitPts = src._hitPts; _energyPts = src._energyPts; _attackDmg = src._attackDmg;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " has been anihilated\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &src) {
	_name = src._name;
	_hitPts = src._hitPts;
	_energyPts = src._energyPts;
	_attackDmg = src._attackDmg;
	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " assaults " << target << ", producing " << _attackDmg << " points of damage\n";
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has become a Gate keeper\n";
}
