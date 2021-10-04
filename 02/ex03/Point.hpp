#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point( void );
	Point( const Fixed& newX, const Fixed& newY );	
	Point( const Point& src );
	~Point();

	Point&		operator=( const Point& src );
	bool		operator==( const Point& p );
	Fixed		x() const;
	Fixed		y() const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const d );

#endif