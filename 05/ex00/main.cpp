#include <iostream>
#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	try {
		Bureaucrat b("name", 1);
		b.incrementGrade();
	}
	catch (std::exception &e) {
		std:: cout << e.what() << std::endl;
	}
	return 0;
}
