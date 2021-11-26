#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : name("default") {
	for (int i=0; i<4; i++)
		materia[i] = NULL;
}

Character::Character(std::string const &name) : name(name) {
	for (int i=0; i<4; i++)
		materia[i] = NULL;
}

Character::Character(const Character &src) {
	name = src.name;
	for (int i=0; i<4; i++)
		materia[i] = src.materia[i]->clone();
}

Character::~Character() {
	for (int i=0; i<4 && materia[i]; i++)
	{
		delete materia[i];
		materia[i] = NULL;
	}
}

Character&	Character::operator=(const Character &src) {
	name = src.name;
	for (int i=0; i<4 && materia[i]; i++)
	{
		delete materia[i];
		materia[i] = NULL;
	}
	for (int i=0; i<4; i++)
		materia[i] = src.materia[i]->clone();
	return *this;
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	int	i = 0;
	while (i<4 && materia[i])
		i++;
	if (i<4)
		materia[i] = m->clone();
}

void Character::unequip(int idx) {
	if (idx>=0 && idx<4)
		materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx>=0 && idx<4 && materia[idx])
		materia[idx]->use(target);
}
