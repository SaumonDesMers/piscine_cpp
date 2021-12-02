#include <iostream>
#include "Convert.hpp"

bool	checkInput(std::string const & str)
{
	std::string validString[6] = {"+inff", "-inff", "nanf", "+inf", "-inf", "nan"};

	for (int i=0; i < 6; i++)
		if (str == validString[i])
			return true;

	if (str.size() == 1 && std::isprint(str[0]))
		return true;
	
	return false;
}

int main(int ac, char *av[])
{
	if (ac != 2)
		std::cout << "Wrong number of arguments" << std::endl;
	else if (!checkInput(av[1]))
		std::cout << "Bad format" << std::endl;
	else
	{
		std::cout << "convert" << std::endl;
		Convert	foo(av[1]);
	}
	return 0;
}
