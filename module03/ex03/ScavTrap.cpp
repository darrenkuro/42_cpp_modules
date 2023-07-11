/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:17:28 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 03:37:54 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors, Destructors, opeartors. */
ScavTrap::ScavTrap() {
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &t) {
    *this = t;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &t) {
    _name = t._name;
    _hitPoints = t._hitPoints;
    _energyPoints = t._energyPoints;
    _attackDamage = t._attackDamage;
    return *this;
}

/* Attack given target, costs 1 energy point, prints a different message. */
void ScavTrap::attack(std::string const &target) {
    if (_energyPoints > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage! "
                  << "This is important because it's a different message!"
                  << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy left."
                  << std::endl;
    }
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!"
              << std::endl;
}
