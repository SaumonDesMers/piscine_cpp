#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap without name has been formed\n";
	_hitPts = 100; _energyPts = 100; _attackDmg = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " has been formed\n";
	_hitPts = 100; _energyPts = 100; _attackDmg = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src._name) {
	std::cout << "FragTrap " << src._name << " has been copied\n";
	_hitPts = src._hitPts; _energyPts = src._energyPts; _attackDmg = src._attackDmg;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been crushed\n";
}

FragTrap&	FragTrap::operator=(const FragTrap &src) {
	_name = src._name;
	_hitPts = src._hitPts;
	_energyPts = src._energyPts;
	_attackDmg = src._attackDmg;
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " ask a high five\n";
}
