#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {

	Point a(15, 15);
	Point b(15, 30);
	Point c(35, 20);
	Point d(20, 20);

	std::cout << bsp(a, b, c, d) << "\n";
	return 0;

}