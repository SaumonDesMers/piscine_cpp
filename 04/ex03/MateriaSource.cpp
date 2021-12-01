#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i=0; i<4; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	for (int i=0; i<4 && src.materia[i]; i++)
		materia[i] = src.materia[i]->clone();
}

MateriaSource::~MateriaSource() {
	for (int i=0; i<4 && materia[i]; i++)
	{
		delete materia[i];
		materia[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &src) {
	for (int i=0; i<4 && materia[i]; i++)
	{
		delete materia[i];
		materia[i] = NULL;
	}
	for (int i=0; i<4 && src.materia[i]; i++)
		materia[i] = src.materia[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	int	i=0;
	while (i<4 && materia[i])
		i++;
	if (i<4)
		materia[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i=0; i<4 && materia[i]; i++)
		if (materia[i]->getType() == type)
			return materia[i];
	return NULL;
}