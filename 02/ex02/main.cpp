#include <iostream>
#include "Fixed.hpp"

int main() {

	float	f1(0.0f), f2(0.0f);
	Fixed	a(f1), b(f2);

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
	std::cout << Fixed::max(a, b) << "\n\n";

	std::cout << "MIN\n";
	std::cout << Fixed::min(a, b) << "\n\n";

	std::cout << "COMPARAISON\n";
	std::cout << "a == b : " << (a == b) << "\n";
	std::cout << "a != b : " << (a != b) << "\n";
	std::cout << "a >= b : " << (a >= b) << "\n";
	std::cout << "a <= b : " << (a <= b) << "\n";
	std::cout << "a > b  : " << (a > b) << "\n";
	std::cout << "a < b  : " << (a < b) << "\n\n";

	a = 1;
	std::cout << "a = 1\n";
	std::cout << "a > 1   = " << a << " > 1 : " << (a > Fixed(1)) << "\n";
	std::cout << "++a > 1 = " << ++a << " > 1 : " << (a > Fixed(1)) << "\n";

	return 0;

}