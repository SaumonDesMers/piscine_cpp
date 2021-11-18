#include <iostream>
#include <cmath>
#include "Fixed.hpp"

bool	Fixed::operator==( const Fixed& fixed ) {
	return _value == fixed.getRawBits();
}

bool	Fixed::operator!=( const Fixed& fixed ) {
	return _value != fixed.getRawBits();
}

bool	Fixed::operator>( const Fixed& fixed ) {
	return _value > fixed.getRawBits();
}

bool	Fixed::operator<( const Fixed& fixed ) {
	return _value < fixed.getRawBits();
}

bool	Fixed::operator<=( const Fixed& fixed ) {
	return _value <= fixed.getRawBits();
}

bool	Fixed::operator>=( const Fixed& fixed ) {
	return _value >= fixed.getRawBits();
}

Fixed	Fixed::operator+( const Fixed& fixed ) {
	Fixed	var(this->toFloat() + fixed.toFloat());
	return var;
}

Fixed	Fixed::operator-( const Fixed& fixed ) {
	Fixed	var(this->toFloat() - fixed.toFloat());
	return var;
}

Fixed	Fixed::operator*( const Fixed& fixed ) {
	Fixed	var(this->toFloat() * fixed.toFloat());
	return var;
}

Fixed	Fixed::operator/( const Fixed& fixed ) {
	Fixed	var(this->toFloat() / fixed.toFloat());
	return var;
}

Fixed	Fixed::operator++( void ) {
	++_value;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	retval(*this);
	_value++;
	return retval;
}

Fixed	Fixed::operator--( void ) {
	++_value;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	Fixed	retval(*this);
	_value--;
	return retval;
}

Fixed const&	Fixed::min( const Fixed& fixed1, const Fixed& fixed2 ) {
	return ((Fixed&)(fixed1.getRawBits() <= fixed2.getRawBits() ? fixed1 : fixed2));
}

Fixed const&	Fixed::max( const Fixed& fixed1, const Fixed& fixed2 ) {
	return ((Fixed&)(fixed1.getRawBits() >= fixed2.getRawBits() ? fixed1 : fixed2));
}

Fixed&			Fixed::min( Fixed& fixed1, Fixed& fixed2 ) {
	return ((Fixed&)(fixed1.getRawBits() <= fixed2.getRawBits() ? fixed1 : fixed2));
}

Fixed&			Fixed::max( Fixed& fixed1, Fixed& fixed2 ) {
	return ((Fixed&)(fixed1.getRawBits() >= fixed2.getRawBits() ? fixed1 : fixed2));
}
