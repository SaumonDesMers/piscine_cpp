#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int					_value;
	static const int	_fractionalBits = 8;

public:
	Fixed( void );
	Fixed( const int newValue );
	Fixed( const float newValue );
	Fixed( const Fixed& src );
	~Fixed();

	Fixed&		operator=( const Fixed& src );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	int			toInt( void ) const;
	float		toFloat( void ) const;

	bool		operator==( const Fixed& fixed );
	bool		operator!=( const Fixed& fixed );
	bool		operator>( const Fixed& fixed );
	bool		operator<( const Fixed& fixed );
	bool		operator<=( const Fixed& fixed );
	bool		operator>=( const Fixed& fixed );
	Fixed		operator+( const Fixed& fixed );
	Fixed		operator-( const Fixed& fixed );
	Fixed		operator*( const Fixed& fixed );
	Fixed		operator/( const Fixed& fixed );
	Fixed		operator++( void );
	Fixed		operator++( int );
	Fixed		operator--( void );
	Fixed		operator--( int );
	static Fixed const&	min( const Fixed& fixed1, const Fixed& fixed2 );
	static Fixed const&	max( const Fixed& fixed1, const Fixed& fixed2 );

	static Fixed&	min( Fixed& fixed1, Fixed& fixed2 );
	static Fixed&	max( Fixed& fixed1, Fixed& fixed2 );
};


std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );

#endif