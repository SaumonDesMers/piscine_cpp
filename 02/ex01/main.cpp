#include <iostream>
#include "Fixed.hpp"

template <class T>
std::string	getBinary( T x ) {

	std::string	str("");
	for (int i = sizeof(T) - 1 ; i >= 0 ; i--)
	{
		std::bitset<8>bitset(reinterpret_cast<char*>(&x)[i]);
		str += bitset.to_string(); ;
	}
	return str;
}

int main( void ) {

	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a.toFloat() << std::endl;
	std::cout << "b is " << b.toFloat() << std::endl;
	std::cout << "c is " << c.toFloat() << std::endl;
	std::cout << "d is " << d.toFloat() << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;

}