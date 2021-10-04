#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Fixed	absFixed( Fixed fixed ) {

	return (fixed >= Fixed(0) ? fixed : Fixed(0) - fixed);
}

void	select( Point a, Point b, Point c, Point& p1, Point& p2, Point& p3 ) {

	Point	retval;
	Fixed	f1(a.x()), f2(b.x()), f3(c.x());
	if (f1 <= f2 && f1 <= f3)
	{
		p1 = a;
		p2 = f2 < f3 ? b : c;
		p3 = f2 < f3 ? c : b;
	}
	else if (f2 <= f1 && f1 <= f3)
	{
		p1 = b;
		p2 = f1 < f3 ? a : c;
		p3 = f1 < f3 ? c : a;
	}
	else if (f3 <= f2 && f3 <= f1)
	{
		p1 = c;
		p2 = f2 < f1 ? b : a;
		p3 = f2 < f1 ? a : b;
	}
}

Fixed	area( Point const a, Point const b, Point const c ) {

	std::cout << "a = " << a.x() << ", " << a.y() << "\n";
	std::cout << "b = " << b.x() << ", " << b.y() << "\n";
	std::cout << "c = " << c.x() << ", " << c.y() << "\n\n";
	std::cout << "arean = 0.5 * |" << a.x()<<"*("<<b.y()<<"-"<<c.y()<<")+"<<b.x()<<"*("<<c.y()<<"-"<<a.y()<<")+"<<c.x()<<"*("<<a.y()<<"-"<<b.y() << ")|\n";
	std::cout << a.x() * (b.y() - c.y()) << "\n";
	std::cout << b.x() * (c.y() - a.y()) << "\n";
	std::cout << c.x() * (a.y() - b.y()) << "\n";
	return Fixed(0.5f) * absFixed(a.x() * (b.y() - c.y()) + b.x() * (c.y() - a.y()) + c.x() * (a.y() - b.y()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const d ) {

	if ((Point&)a == d || (Point&)b == d || (Point&)c == d)
		return false;

	Fixed	ABC = area(a, b, c);
	std::cout << "ABC = " << ABC << "\n\n";
	Fixed	ABD = area(a, b, d);
	std::cout << "ABD = " << ABD << "\n\n";
	Fixed	ADC = area(a, c, d);
	std::cout << "ADC = " << ADC << "\n\n";
	Fixed	DBC = area(b, c, d);
	std::cout << "DBC = " << DBC << "\n\n";

	std::cout << "sum = " << ABD + ADC + DBC << "\n";

	return (ABC == ABD + ADC + DBC);
}