/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:17:28 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:53:34 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors, Destructors, opeartors. */
ScavTrap::ScavTrap() {
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap constructor called for " << name << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &t) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = t;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &t) {
	    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    _name = t._name;
    _hitPoints = t._hitPoints;
    _energyPoints = t._energyPoints;
    _attackDamage = t._attackDamage;
    return *this;
}

/* Attack given target, costs 1 energy point, prints a different message. */
void ScavTrap::attack(std::string const &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage! "
                  << "This is important because it's a different message!"
                  << std::endl;
        _energyPoints--;
		    } else if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " is dead, failed to attack!"
                  << std::endl;
    } else if (_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name
                  << " has no energy left, failed to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!"
              << std::endl;
}
