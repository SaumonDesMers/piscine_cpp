#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>

class Karen {

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	Karen( void );
	~Karen();

	void	complain( std::string level );
};

enum {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

#endif