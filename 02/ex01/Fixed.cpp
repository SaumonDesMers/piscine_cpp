#include <iostream>
#include "Fixed.hpp"

int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0) { 
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const int newValue ) {
	_value = newValue;
}

Fixed::Fixed( const float newValue ) {
	_value = newValue;
}

Fixed::Fixed( const Fixed& src ) {
	std::cout << "Copy constructor called\n";
	_value = src.getRawBits();
}

Fixed&	Fixed::operator=( const Fixed& src ) {
	std::cout << "Assignation operator called\n";
	_value = src.getRawBits();
	return *this;
}

float	Fixed::operator<<( const Fixed& src ) {
	(void)src;
	return 0;
}


int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return _value;
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
	std::cout << "setRawBits member function called\n";
}

int		Fixed::toInt( void ) const {
	return _value;
}

float	Fixed::toFloat( void ) const {
	return _value;
}
