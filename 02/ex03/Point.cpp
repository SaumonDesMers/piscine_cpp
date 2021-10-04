#include "Fixed.hpp"
#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( const Fixed& newX, const Fixed& newY ) {
	(Fixed&)_x = newX;
	(Fixed&)_y = newY;
}

Point::Point( const Point& src ) {
	(Fixed&)_x = src._x;
	(Fixed&)_y = src._y;
}

Point::~Point() {}

Point&		Point::operator=( const Point& src ) {
	(Fixed&)_x = src._x;
	(Fixed&)_y = src._y;
	return *this;
}

bool	Point::operator==( const Point& p ) {
	return ((Fixed&)_x == p._x && (Fixed&)_y == p._y);
}

Fixed	Point::x() const {
	return _x;
}

Fixed	Point::y() const {
	return _y;
}
