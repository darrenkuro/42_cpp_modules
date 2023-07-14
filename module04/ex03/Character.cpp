/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:23:14 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 20:56:06 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name(""), _nEquiped(0) {
    for (int i = 0; i < inventorySize; i++)
        _inventory[i] = NULL;
}

/**
 * Destructor has to loop over the entire inventory due to the mechanism of
 * Unequip Any index could be null and it is not guaranteed to be the last one.
 */
Character::~Character(void) {
    for (int i = 0; i < inventorySize; i++)
        if (_inventory[i])
            delete _inventory[i];
}

Character::Character(std::string const &name) : _name(name), _nEquiped(0) {
    for (int i = 0; i < inventorySize; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const &t) { *this = t; }

std::string const &Character::getName() const { return _name; }

void Character::equip(AMateria *m) {
    if (_nEquiped >= inventorySize)
        return;
    for (int i = 0; i < inventorySize; i++)
        _inventory[i] = _inventory[i] ? _inventory[i] : m;
    _nEquiped++;
}

/**
 * Manual explicitly stated that unequip should not delete the materia.
 * But need to avoid memory leaks, so it's caller's job to make sure they are
 * properly deleted.
 */
void Character::unequip(int idx) {
    if (idx >= 0 && idx < inventorySize && _inventory[idx]) {
        _inventory[_nEquiped] = NULL;
        _nEquiped--;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < inventorySize && _inventory[idx])
        _inventory[idx]->use(target);
}
