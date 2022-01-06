#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <queue>

int main()
{
	std::list<int> myList(10, 4);
	try
	{
		std::cout << easyfind(myList, 4) << std::endl;
		std::cout << easyfind(myList, 42) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::deque<int> myQueue(4, 100);
	try
	{
		std::cout << easyfind(myQueue, 100) << std::endl;
		std::cout << easyfind(myQueue, 42) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
