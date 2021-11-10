#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int		size = 4;
	Animal	**animal = new Animal*[size];

	for (int i=0; i < size/2; i++)
		animal[i] = new Dog();

	for (int i=size/2; i < size; i++)
		animal[i] = new Cat();

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Animal[0] idea: "; animal[0]->showIdeas(0);
	animal[0]->setIdea(0, "I have an idea");
	std::cout << "Animal[0] idea: "; animal[0]->showIdeas(0);

	std::cout << std::endl;

	std::cout << "Animal[1] idea: "; animal[1]->showIdeas(0);
	*animal[1] = *animal[0];
	std::cout << "Animal[1] idea: "; animal[1]->showIdeas(0);
	animal[0]->setIdea(0, "I have an other idea");
	std::cout << "Animal[0] idea: "; animal[0]->showIdeas(0);
	std::cout << "Animal[1] idea: "; animal[1]->showIdeas(0);

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Animal[2] idea: "; animal[2]->showIdeas(0);
	animal[2]->setIdea(0, "I have an idea");
	std::cout << "Animal[2] idea: "; animal[2]->showIdeas(0);

	std::cout << std::endl;

	std::cout << "Animal[3] idea: "; animal[3]->showIdeas(0);
	*animal[3] = *animal[2];
	std::cout << "Animal[3] idea: "; animal[3]->showIdeas(0);
	animal[2]->setIdea(0, "I have an other idea");
	std::cout << "Animal[2] idea: "; animal[2]->showIdeas(0);
	std::cout << "Animal[3] idea: "; animal[3]->showIdeas(0);
	std::cout << "-------------------------------------" << std::endl;

	for (int i=0; i < size; i++)
		delete animal[i];
	delete[] animal;
	return 0;
}
