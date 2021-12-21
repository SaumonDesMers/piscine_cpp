#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
	int	int_tab[4] = {0, 1, 2, 3};
	iter(int_tab, 4, f);

	std::cout << std::endl;

	std::string	str_tab[3] = {"Hello", "world", "!"};
	iter(str_tab, 3, f);
	return 0;
}
