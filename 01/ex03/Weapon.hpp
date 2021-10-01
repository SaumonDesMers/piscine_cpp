#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

private:
	std::string type;

public:
	Weapon( void );
	Weapon( std::string weapon );
	~Weapon();

	void				setType( std::string weapon );
	const std::string&	getType( void );
};

#endif