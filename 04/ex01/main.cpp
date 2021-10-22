#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char const *argv[])
{
	int		size = 10;
	Animal	**animal = new Animal*[size];

	std::cout << std::endl;

	for (int i=0; i < size/2; i++)
		animal[i] = new Dog();

	for (int i=size/2; i < size; i++)
		animal[i] = new Cat();

	std::cout << std::endl;

	for (int i=0; i < size; i++)
		delete animal[i];
	delete[] animal;
	return 0;
}
