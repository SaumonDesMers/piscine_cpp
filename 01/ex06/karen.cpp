#include <string>
#include "karen.hpp"
#include <iostream>

Karen::Karen( void ) {}

Karen::~Karen() {}

void	Karen::debug( void ) {
	std::cout << "I love to get extra baconfor my \
7XL-double-cheese-triple-pickle-special-ketchup \
burger. I just love it!\n";
}

void	Karen::info( void ) {
	std::cout << "I cannot believe adding extrabacon \
cost more money. You don’t put enough! If you \
did I would not have to askfor it!\n";
}

void	Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra \
bacon for free. I’ve beencoming here for years and \
you just started working here last month.\n";
}

void	Karen::error( void ) {
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain( std::string level ) {

	void (Karen::* fctPtr[4])( void ) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	std::string	fctStr[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	Karen		karen;

	for (int i=0; i < 4; i++)
		if (fctStr[i] == level)
			(karen.*fctPtr[i])();
}
