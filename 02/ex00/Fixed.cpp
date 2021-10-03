#include <iostream>
#include "Fixed.hpp"

int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0) { 
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed& src ) {
	std::cout << "Copy constructor called\n";
	_value = src.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=( const Fixed& src ) {
	std::cout << "Assignation operator called\n";
	_value = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return _value;
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
	std::cout << "setRawBits member function called\n";
}
