#include <iostream>
#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap	ct1("Lancelot");

	ct1.attack("Perseval");
	ct1.takeDamage(5);
	ct1.beRepaired(5);
	return 0;
}
