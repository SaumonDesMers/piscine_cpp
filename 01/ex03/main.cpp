#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "HumanA.hpp"

int	main( void )
{
	HumanA	humanA("Jacques", "sword");
	HumanB	humanB("Pierre");

	std::cout << "Humans attack before grabbing a weapon :\n";
	humanA.attack();
	humanB.attack();

	humanA.setWeapon("bow");
	humanB.setWeapon("baseball bat");
	std::cout << "\nHumans attack after grabbing a weapon :\n";
	humanA.attack();
	humanB.attack();
	return 0;
}