#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

private:
	int			_value;
	static int	_fractionalBits;

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
	static Fixed&	min( const Fixed& fixed1, const Fixed& fixed2 );
	static Fixed&	max( const Fixed& fixed1, const Fixed& fixed2 );
};

Fixed&		min( const Fixed& fixed1, const Fixed& fixed2 );
Fixed&		max( const Fixed& fixed1, const Fixed& fixed2 );

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );

#endif