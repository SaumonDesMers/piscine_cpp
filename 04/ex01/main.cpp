#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char const *argv[])
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl;

	dog->showIdeas();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;

	return 0;
}
