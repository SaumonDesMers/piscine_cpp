#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
	std::cout << name << " died miserably\n";
}

void	Zombie::announce(void) {
	std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}