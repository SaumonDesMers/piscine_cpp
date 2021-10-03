#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

private:
	int			_value;
	static int	_fractionalBits;

public:
	Fixed( void );
	Fixed( const Fixed& src );
	~Fixed();
	Fixed&	operator=( const Fixed& src );

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif