/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:12:41 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 07:33:40 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) { _type = type; }
Weapon::~Weapon() {}
std::string const &Weapon::getType(void) const { return _type; }
void Weapon::setType(std::string type) { _type = type; }
