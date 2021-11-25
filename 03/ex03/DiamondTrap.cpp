#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap without name has been invoked\n";
	this->_hitPts = FragTrap::_Frag_hitPts;
	this->_energyPts = ScavTrap::_Scav_energyPts;
	this->_attackDmg = FragTrap::_Frag_attackDmg;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _Name(name) {
	std::cout << "DiamondTrap " << name << " has been invoked\n";
	_name = name + "_clap_name";
	this->_hitPts = FragTrap::_Frag_hitPts;
	this->_energyPts = ScavTrap::_Scav_energyPts;
	this->_attackDmg = FragTrap::_Frag_attackDmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	std::cout << "DiamondTrap " << src._name << " has been copied\n";
	_Name = src._Name;
	_name = src._name;
	this->_hitPts = src.FragTrap::_hitPts;
	this->_energyPts = src.ScavTrap::_energyPts;
	this->_attackDmg = src.FragTrap::_attackDmg;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _Name << " has been disintegrated\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &src) {
	_Name = src._Name;
	_name = src._name;
	this->_hitPts = src.FragTrap::_hitPts;
	this->_energyPts = src.ScavTrap::_energyPts;
	this->_attackDmg = src.FragTrap::_attackDmg;
	return *this;
}

void	DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap " << _Name << " is " << _name << "\n";
}

void	DiamondTrap::info() const {
	std::cout << "name: " << _Name << std::endl;
	std::cout << "hitPts: " << _hitPts << std::endl;
	std::cout << "energyPts: " << _energyPts << std::endl;
	std::cout << "attackDmg: " << _attackDmg << std::endl;
}
