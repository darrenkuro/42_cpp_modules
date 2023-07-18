/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:44:36 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:44:57 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors, Destructors, opeartors. */
ClapTrap::ClapTrap() {
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &t) {
    *this = t;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &t) {
    _name = t._name;
    _hitPoints = t._hitPoints;
    _energyPoints = t._energyPoints;
    _attackDamage = t._attackDamage;
    return *this;
}

/* Attack given target, costs 1 energy point. */
void ClapTrap::attack(std::string const &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!"
                  << std::endl;
        _energyPoints--;
    } else if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is dead, failed to attack!"
                  << std::endl;
    } else if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name
                  << " has no energy left, failed to attack!" << std::endl;
    }
}

/* Take given amount of damage, make sure hit points do not overflow. */
void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= amount) {
        std::cout << "ClapTrap " << _name << " takes " << amount
                  << " hit points of damage! And is now dead!" << std::endl;
        _hitPoints = 0;
    } else {
        std::cout << "ClapTrap " << _name << " takes " << amount
                  << " hit points of damage!" << std::endl;
        _hitPoints -= amount;
    }
}

/* Repair with given amount of hit points, costs 1 energy point. */
void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " repairs itself with " << amount
                  << " hit points!" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    } else if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is dead, failed to repair!"
                  << std::endl;
    } else if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name
                  << " has no energy left, failed to repair!" << std::endl;
    }
}
