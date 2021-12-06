#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> myArray(3);

	myArray[0] = 1;
	myArray[1] = 3;
	myArray[2] = 5;

	for (int i=0; i<3; i++)
		std::cout << myArray[i] << std::endl;
	return 0;
}
