/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:02:30 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 09:17:59 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("") {}
AMateria::~AMateria(void) {}
AMateria::AMateria(std::string const &type) : _type(type) {}
AMateria::AMateria(AMateria const &t) { *this = t; }

/**
 * "Clone and copy" technique for base class to assign the correct type.
 */
AMateria &AMateria::operator=(AMateria const &t) {
    // AMateria *temp = this;
    if (this != &t) {
        *this = *(t.clone());
        // delete temp;
    }
    return *this;
}

std::string const &AMateria::getType() const { return _type; }

void AMateria::use(ICharacter &target) {
    std::cout << "AMateria " << _type << " used on " << target.getName()
              << std::endl;
}
