#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	fragTrap.attack("anyone");
	fragTrap.takeDamage(5);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();

	std::cout << "\n";

	DiamondTrap	diamondTrap("Arthur");
	diamondTrap.attack("everyone");
	diamondTrap.takeDamage(5);
	diamondTrap.beRepaired(5);
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
	diamondTrap.info();

	std::cout << "\n";
	return 0;
}
