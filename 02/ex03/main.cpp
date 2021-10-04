#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( int ac, char **av ) {

	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(30), Fixed(0));
	Point c(Fixed(0), Fixed(30));
	Point d(Fixed(5), Fixed(5));

	std::cout << bsp(a, b, c, d) << "\n";

	std::cout << Fixed(0) - Fixed(30) << "\n";
	return 0;

}