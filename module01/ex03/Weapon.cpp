/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:12:41 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:28:50 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("") {}
Weapon::~Weapon() {}
Weapon::Weapon(std::string type) : _type(type) {}

std::string const &Weapon::getType(void) const { return _type; }
void Weapon::setType(std::string type) { _type = type; }
