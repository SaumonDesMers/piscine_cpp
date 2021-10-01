#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie * John = newZombie("John");
	John->announce();

	Zombie	Max("Max");
	Max.announce();

	delete John;

	randomChump("Kevin");

	return 0;
}