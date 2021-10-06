#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Fixed	absFixed( Fixed fixed ) {

	return (fixed >= Fixed(0) ? fixed : Fixed(0) - fixed);
}

Fixed	area( Point const a, Point const b, Point const c ) {

	return Fixed(0.5f) * absFixed(a.x() * (b.y() - c.y()) + b.x() * (c.y() - a.y()) + c.x() * (a.y() - b.y()));
}

Fixed	coefDirect( Point const a, Point const b ) {

	return ((b.y() - a.y()) / (b.x() - a.x()));
}

bool	isAligne( Point const a, Point const b, Point const point ) {

	return (coefDirect(a, b) == coefDirect(a, point) && coefDirect(a, b) == coefDirect(b, point));
}

bool	bsp( Point const a, Point const b, Point const c, Point const d ) {

	if ((Point&)a == d || (Point&)b == d || (Point&)c == d)
		return false;
	if (isAligne(a, b, d) || isAligne(a, c, d) || isAligne(b, c, d))
		return false;

	Fixed	ABC = area(a, b, c);
	Fixed	ABD = area(a, b, d);
	Fixed	ADC = area(a, c, d);
	Fixed	DBC = area(b, c, d);
	return (ABC == ABD + ADC + DBC);
}