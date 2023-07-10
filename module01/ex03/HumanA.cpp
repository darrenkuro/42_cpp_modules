/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:19:41 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 07:33:29 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {}
HumanA::~HumanA() {}

void HumanA::attack(void) const {
    std::cout << _name << " attacks with their " << _weapon.getType()
              << std::endl;
}
