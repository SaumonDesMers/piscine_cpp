#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap	clapTrap("Lancelot");
	clapTrap.attack("someone");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);

	std::cout << "\n";

	ScavTrap	scavTrap("Perceval");
	scavTrap.attack("someone else");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();

	std::cout << "\n";

	return 0;
}
