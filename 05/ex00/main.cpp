#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("name", 150);
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("name", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
