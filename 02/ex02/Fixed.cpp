#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed( const Fixed& src ) {
	_value = src.getRawBits();
}

Fixed::Fixed( const int newValue ) {
	_value = newValue << 8;
}

Fixed::Fixed( const float newValue ) {
	float	x = newValue;
	for (int i=0; i < _fractionalBits; i++)
		x *= 2;
	x = roundf(x);
	_value = (int)x;
}

Fixed&	Fixed::operator=( const Fixed& fixed ) {
	_value = fixed.getRawBits();
	return *this;
}

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}

int		Fixed::getRawBits( void ) const {
	return _value;
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
}

int		Fixed::toInt( void ) const {
	return _value >> 8;
}

float	nValue() {
	float	n = 1;
	for (int i=0; i < 8; i++)
		n /= 2;
	return n;
}

float	Fixed::toFloat( void ) const {
	
	float	retval = 0;
	float	n = nValue();
	for (int i = 0; i < 32;  i++, n *= 2)
		retval += ((_value >> i) & 1) * n;
	return retval;
}
