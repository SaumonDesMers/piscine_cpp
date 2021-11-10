#include <string>
#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
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

	delete animal;
	delete dog;
	delete cat;

	std::cout << "--------------------------------------------\n";

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;


	std::cout << wrongCat->getType() << std::endl;

	std::cout << std::endl;

	wrongCat->makeSound();
	wrongAnimal->makeSound();

	std::cout << std::endl;
	
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
