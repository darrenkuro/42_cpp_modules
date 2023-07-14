/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:02:30 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 20:14:29 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("") {}
AMateria::~AMateria(void) {
    std::cout << "AMateria " << _type << " destroyed" << std::endl;
}
AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "AMateria " << _type << " created" << std::endl;
}

AMateria::AMateria(AMateria const &t) { *this = t; }

std::string const &AMateria::getType() const { return _type; }

AMateria *AMateria::clone() const { return (AMateria *)this; }

void AMateria::use(ICharacter &target) {
    std::cout << "AMateria " << _type << " used on " << target.getName()
              << std::endl;
}
