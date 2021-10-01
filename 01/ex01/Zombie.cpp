#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::Zombie( void ) : _name("") {}

Zombie::~Zombie() {
	std::cout << _name << " died miserably\n";
}

void	Zombie::announce( void ) {
	std::cout << _name << " BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName( std::string newName ) {
	_name = newName;
}
