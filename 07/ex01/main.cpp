#include <iostream>
#include <string>
#include "iter.hpp"

template<> int f<int> (int x)
{
	return x + 1;
}

template<> std::string f<std::string> (std::string str)
{
	return "_" + str + "_";
}

int main()
{
	int	int_tab[4] = {0, 1, 2, 3};
	test(int_tab, 4, f<int>);

	std::cout << std::endl;

	std::string	str_tab[3] = {"Hello", "world", "!"};
	test(str_tab, 3, f<std::string>);
	return 0;
}
