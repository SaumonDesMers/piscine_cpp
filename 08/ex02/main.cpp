#include <iostream>
#include <stack>
#include <list>
#include "mutantstack.hpp"

int main()
{
	int		array[100] = {
		22, 366, 707, 312, 153, 927, 891, 859, 172, 916, 168, 573, 918, 343, 595, 916, 795,
		246, 39, 212, 312, 415, 657, 637, 882, 432, 845, 936, 757, 992, 585, 369, 148, 457,
		652, 61, 216, 986, 774, 769, 168, 327, 807, 355, 188, 498, 605, 966, 438, 894, 836,
		943, 983, 969, 185, 581, 487, 806, 690, 84, 281, 735, 668, 834, 581, 514, 371, 825,
		433, 189, 607, 718, 501, 730, 658, 731, 804, 204, 142, 497, 348, 269, 57, 393, 129,
		114, 33, 682, 153, 970, 971, 225, 887, 526, 383, 360, 401, 33, 730, 809
	};

	std::cout << "----- MutantStack -----\n" << std::endl;

	MutantStack<int> mstack;

	std::cout << "Is mutantStack empty: " << mstack.empty() << std::endl;

	std::cout << "Push 100 numbers..." << std::endl;
	for (int i=0; i<100; i++)
		mstack.push(array[i]);

	std::cout << "Is mutantStack empty: " << mstack.empty() << std::endl;

	std::cout << "Top value: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	std::cout << "Pop 15 numbers..." << std::endl;
	for (int i=0; i<15; i++)
		mstack.pop();

	std::cout << "Top value: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "Print stack with iterator:" << std::endl;
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << "\n\n----- List -----\n" << std::endl;

	std::list<int> list;

	std::cout << "Is list empty: " << list.empty() << std::endl;

	std::cout << "Push 100 numbers..." << std::endl;
	for (int i=0; i<100; i++)
		list.push_back(array[i]);

	std::cout << "Is list empty: " << list.empty() << std::endl;

	std::cout << "Top value: " << list.back() << std::endl;
	std::cout << "Size: " << list.size() << std::endl;

	std::cout << "Pop 15 numbers..." << std::endl;
	for (int i=0; i<15; i++)
		list.pop_back();

	std::cout << "Top value: " << list.back() << std::endl;
	std::cout << "Size: " << list.size() << std::endl;

	std::list<int>::iterator it_list = list.begin();
	std::list<int>::iterator ite_list = list.end();

	std::cout << "Print list with iterator:" << std::endl;
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << *it_list << " ";
		++it_list;
	}

	return 0;
}
