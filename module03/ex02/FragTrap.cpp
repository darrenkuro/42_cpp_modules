/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:36:47 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:57:56 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors, Destructors, opeartors. */
FragTrap::FragTrap() {
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	    std::cout << "FragTrap constructor called for " << name << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &t) {
	std::cout << "FragTrap copy constructor called" << std::endl;
    *this = t;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &t) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
    _name = t._name;
    _hitPoints = t._hitPoints;
    _energyPoints = t._energyPoints;
    _attackDamage = t._attackDamage;
    return *this;
}

/* Attack given target, costs 1 energy point, prints a different message. */
void FragTrap::attack(std::string const &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "FragTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage! "
                  << "This is important because it's a different message!"
                  << std::endl;
        _energyPoints--;
	} else if (_hitPoints <= 0) {
        std::cout << "FragTrap " << _name << " is dead, failed to attack!"
                  << std::endl;
    } else if (_energyPoints <= 0) {
        std::cout << "FragTrap " << _name
                  << " has no energy left, failed to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " highfives everybody!" << std::endl;
}
