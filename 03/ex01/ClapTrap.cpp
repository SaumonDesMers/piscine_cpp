#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("noName"), _hitPts(10), _energyPts(10), _attackDmg(0) {
	std::cout << "ClapTrap without name has been created\n";
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPts(10), _energyPts(10), _attackDmg(0) {
	std::cout << "ClapTrap " << name << " has been created\n";
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hitPts(src._hitPts), _energyPts(src._energyPts), _attackDmg(src._attackDmg) {
	std::cout << "ClapTrap " << src._name << " has been copied\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " has been destroyed\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &src) {
	_name = src._name;
	_hitPts = src._hitPts;
	_energyPts = src._energyPts;
	_attackDmg = src._attackDmg;
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDmg << " points of damage.\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " receive " << amount << " points of damage.\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points.\n";
}
