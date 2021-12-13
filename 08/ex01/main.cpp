#include <iostream>
#include <vector>
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
		Span sp = Span(3);

		sp.addNumber(5);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n----- 100,000 TEST -----" << std::endl;
	try
	{
		Span sp = Span(100000);
		std::vector<int>	v;

		for (int i=0; i<100000; i++)
			v.push_back(i);

		std::random_shuffle(v.begin(), v.end());
		sp.addNumber(v.begin(), v.end());

		// sp.geter();

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
