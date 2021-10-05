#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int Fixed::_fractionalBits = 8;

template <class T>
std::string	getBinary( T x ) {

	std::string	str("");
	for (int i = sizeof(T) - 1 ; i >= 0 ; i--)
	{
		std::bitset<8>bitset(reinterpret_cast<char*>(&x)[i]);
		str += bitset.to_string();
	}
	return str;
}

Fixed::Fixed( void ) : _value(0) { 
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const Fixed& src ) {
	std::cout << "Copy constructor called\n";
	_value = src.getRawBits();
}

Fixed::Fixed( const int newValue ) {
	std::cout << "Int constructor called\n";
	_value = newValue << 8;
	if (newValue > 0)
		_value = (_value^(0xffffffff)) + 1 - 0x7fffffff; // converte to binary 2's complement
}

Fixed::Fixed( const float newValue ) {
	std::cout << "Float constructor called\n";
	float	x = newValue;
	for (int i=0; i < _fractionalBits; i++)
		x *= 2;
	x = roundf(x);
	_value = (int)x;
	if (newValue > 0)
		_value = (_value^(0xffffffff)) + 1 - 0x7fffffff; // converte to binary 2's complement
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

int		Fixed::toInt( void ) const {
	int		x = (_value - 1)^(0xffffffff); // converte to binary number
	if (((_value >> 31) & 1) == 0)
		x += 0x7fffffff;
	return ((x >> 8) * (((_value >> 31) & 1) == 1 ? -1 : 1));
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
	int		x = (_value - 1)^(0xffffffff); // converte to binary number
	for (int i = 0; i < 31;  i++, n *= 2)
		retval += ((x >> i) & 1) * n;
	return retval * (((_value >> 31) & 1) == 1 ? -1 : 1);
}
