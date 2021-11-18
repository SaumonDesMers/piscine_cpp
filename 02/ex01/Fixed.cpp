#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) { 
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const Fixed& src ) : _value(src.getRawBits()) {
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int nb) : _value(nb << _fractionalBits) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _fractionalBits))) {
	std::cout << "Float constructor called\n";
}

Fixed&	Fixed::operator=( const Fixed& fixed ) {
	std::cout << "Assignation operator called\n";
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
