#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {

private:
	std::string name;
	Weapon		weapon;

public:
	HumanA( std::string name, std::string weapon );
	~HumanA();

	void	setWeapon( std::string weapon );
	void	attack( void );
};

#endif