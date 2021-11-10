#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal	animal;
	Dog		dog;
	Cat		cat;

	std::cout << std::endl;
	
	dog.showIdeas(15);
	cat.showIdeas(66);

	std::cout << std::endl;

	return 0;
}
