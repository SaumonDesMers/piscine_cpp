#include <iostream>
#include <limits>
#include "Convert.hpp"

bool	checkInput(std::string const & str)
{
	if (str.size() == 0)
		return false;

	std::string validString[6] = {"+inff", "-inff", "nanf", "+inf", "-inf", "nan"};
	for (int i=0; i < 6; i++)
		if (str == validString[i])
			return true;

	if (str.size() == 1 && std::isprint(str[0]))
		return true;

	for (int i=0; str[i]; i++)
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-')
			return false;

	if (str.find_first_not_of("-.f") == std::string::npos)
		return false;

	size_t point = str.find_first_of('.');
	if (point != std::string::npos && (point == 0 || point == str.size() - 1 || str.find_first_of('.', point + 1) != std::string::npos))
		return false;

	size_t f = str.find_first_of('f');
	if (f != std::string::npos && f != str.size() - 1)
		return false;

	size_t minus = str.find_first_of('-');
	if (minus != std::string::npos && (minus != 0 || str.find_first_of('-', minus + 1) != std::string::npos))
		return false;

	return true;
}

int main(int ac, char *av[])
{
	if (ac != 2)
		std::cout << "Wrong number of arguments" << std::endl;
	else if (!checkInput(av[1]))
		std::cout << "Bad format" << std::endl;
	else
	{
		Convert	foo(av[1]);
		foo.print();
	}
	return 0;
}
