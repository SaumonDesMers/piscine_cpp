#ifndef FIXED_HPP
#define FIXED_HPP

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
};

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );

#endif