#include <iostream>
#include <sstream>
#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie	*horde;
	int	N = 1;

	if (ac >= 2)
		std::stringstream(av[1]) >> N;
	horde = zombieHorde(N, "fan");
	for (int i=0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}