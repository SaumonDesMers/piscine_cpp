#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed( const Fixed& src ) : _value(src.getRawBits()) {}

Fixed::Fixed(const int nb) : _value(nb << _fractionalBits) {}

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _fractionalBits))) {}

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

float	Fixed::toFloat(void) const {
	return (this->_value / static_cast<float>(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (this->_value >> _fractionalBits);
}
