#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		for (int i=1; i < ac; i++)
			for (int j=0; av[i][j]; j++)
				std::cout << (char)((av[i][j] >= 'a' && av[i][j] <= 'z') ? av[i][j] - 32: av[i][j]);
		std::cout << "\n";
	}
	return 0;
}