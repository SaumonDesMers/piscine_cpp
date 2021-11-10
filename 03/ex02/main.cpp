#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
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

	FragTrap	fragTrap("Tristram");
	fragTrap.attack("anybody");
	fragTrap.takeDamage(5);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();

	std::cout << "\n";

	return 0;
}
