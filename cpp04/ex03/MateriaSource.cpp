#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i) {
        delete materias[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i) {
            delete materias[i];
            if (other.materias[i]) {
                materias[i] = other.materias[i]->clone();
            }
        }
    }
    return *this;
}

// mがなければ最大4つまで学習する
void            MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i) {
        if (materias[i] == NULL) {
            materias[i] = m;
            return ;
        }
    }
    std::cout << "full materias" << std::endl;
}

// typeに一致するmateriaを持っていたら、それをクローンして新しく作る
AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}
