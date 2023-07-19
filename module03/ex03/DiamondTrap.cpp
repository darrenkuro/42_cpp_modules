/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:45:37 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 04:54:30 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
    _name = name;
    ClapTrap::_name = name + "_clap_name";

    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

void DiamondTrap::whoAmI(void) const {
    std::cout << "I am a DiamondTrap named " << _name
              << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
