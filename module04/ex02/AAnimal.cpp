/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:34:31 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:25:18 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() { std::cout << "AAnimal constructor called" << std::endl; }
AAnimal::~AAnimal() { std::cout << "AAnimal destructor called" << std::endl; }
AAnimal::AAnimal(AAnimal const &t) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = t;
}
AAnimal &AAnimal::operator=(AAnimal const &t) {
    std::cout << "AAnimal copy assignment op called" << std::endl;
    _type = t.getType();
    return *this;
}

std::string const &AAnimal::getType() const { return _type; };
