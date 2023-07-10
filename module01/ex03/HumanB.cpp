/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:19:41 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 07:33:08 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { _weapon = NULL; }
HumanB::~HumanB() {}

void HumanB::attack(void) const {
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType()
                  << std::endl;
    else
        std::cout << _name << " doesn't have a weapon" << std::endl;
}
void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }
