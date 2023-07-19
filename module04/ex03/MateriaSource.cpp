/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:45:07 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 13:57:31 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nLearned(0) {
    for (int i = 0; i < materiaSize; i++)
        _materias[i] = NULL;
}
MateriaSource::~MateriaSource() {
    for (int i = 0; i < materiaSize; i++)
        if (_materias[i])
            delete _materias[i];
}
MateriaSource::MateriaSource(MateriaSource const &t) { *this = t; }
MateriaSource &MateriaSource::operator=(MateriaSource const &t) {
    if (this != &t) {
        for (int i = 0; i < materiaSize; i++) {
            if (_materias[i])
                delete _materias[i];
            _materias[i] = t._materias[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (_nLearned >= materiaSize)
        return;
    for (int i = 0; i < materiaSize; i++)
        if (_materias[i] == NULL) {
            _materias[i] = m;
            _nLearned++;
            return;
        }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < materiaSize; i++)
        if (_materias[i] && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    return NULL;
}
