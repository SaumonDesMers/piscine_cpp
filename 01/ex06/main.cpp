#include <iostream>
#include <string>
#include "karen.hpp"

int	filter( std::string filter ) {

	std::string	fctStr[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	Karen		karen;
	int			n = 0;

	for (int i=0; fctStr[i] != filter && i < 4; i++, n++);
	return n;
}

int main( int ac, char **av )
{
	Karen	karen;

	(void)ac;
	if (ac != 2) {
		std::cout << "[ Filter ? ]\n";
		return 0;
	}
	switch (filter(av[1])) {

	case DEBUG: 
		std::cout << "[ DEBUG ]\n";
		karen.complain("DEBUG");
		std::cout << "\n";
	case INFO: 
		std::cout << "[ INFO ]\n";
		karen.complain("INFO");
		std::cout << "\n";
	case WARNING: 
		std::cout << "[ WARNING ]\n";
		karen.complain("WARNING");
		std::cout << "\n";
	case ERROR: 
		std::cout << "[ ERROR ]\n";
		karen.complain("ERROR"); break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
	return 0;
}