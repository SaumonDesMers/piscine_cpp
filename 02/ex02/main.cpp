#include <iostream>
#include "Fixed.hpp"

template <class T>
std::string	getBinary( T x ) {

	std::string	str("");
	for (int i = sizeof(T) - 1 ; i >= 0 ; i--)
	{
		std::bitset<8>bitset(reinterpret_cast<char*>(&x)[i]);
		str += bitset.to_string(); ;
	}
	return str;
}

int main( int ac, char **av ) {

	if (ac < 3)
		return 0;
	float	f1=atof(av[1]), f2=atof(av[2]);
	Fixed a(f1), b(f2);

	std::cout << "ADDITION\n";
	std::cout << "Fixed : " << a + b << "\n";
	std::cout << "Float : " << f1 + f2 << "\n\n";

	std::cout << "SOUSTRACTION\n";
	std::cout << "Fixed : " << a - b << "\n";
	std::cout << "Float : " << f1 - f2 << "\n\n";

	std::cout << "MULTIPLICATION\n";
	std::cout << "Fixed : " << a * b << "\n";
	std::cout << "Float : " << f1 * f2 << "\n\n";

	std::cout << "DIVISION\n";
	std::cout << "Fixed : " << a / b << "\n";
	std::cout << "Float : " << f1 / f2 << "\n\n";

	std::cout << "MAX\n";
	std::cout << max(a, b) << "\n\n";

	std::cout << "MIN\n";
	std::cout << min(a, b) << "\n\n";

	std::cout << "COMPARAISON\n";
	std::cout << "a == b :" << (a == b) << "\n";
	std::cout << "a != b :" << (a != b) << "\n";
	std::cout << "a >= b :" << (a >= b) << "\n";
	std::cout << "a <= b :" << (a <= b) << "\n";
	std::cout << "a > b  :" << (a > b) << "\n";
	std::cout << "a < b  :" << (a < b) << "\n\n";

	return 0;

}