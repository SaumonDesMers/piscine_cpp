#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "span.hpp"

int main()
{
	std::cout << "----- MAIN TEST -----" << std::endl;
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- EXCEPTION TEST -----" << std::endl;
	try
	{
		Span sp = Span(3);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(5);
		std::vector<int>	v;

		for (int i=0; i<10; i++)
			v.push_back(0);
		sp.addNumber(v.begin(), v.end());
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Span sp = Span(3);

		sp.addNumber(5);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n----- 10,000 TEST -----" << std::endl;
	try
	{
		Span sp = Span(10000);
		std::vector<int>	v;

		for (int i=0; i<10000; i++)
		{
			std::srand(std::time(NULL) * i);
			v.push_back(std::rand());
		}
		sp.addNumber(v.begin(), v.end());

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
