#include <iostream>
#include <string>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address with string    : " << &str << "\n";
	std::cout << "Address with stringPTR : " << stringPTR << "\n";
	std::cout << "Address with stringREF : " << &stringREF << "\n\n";
	std::cout << "String with stringPTR  : " << *stringPTR << "\n";
	std::cout << "String with stringREF  : " << stringREF << "\n";
	return 0;
}