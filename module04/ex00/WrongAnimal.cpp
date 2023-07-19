/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:19:55 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:19:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &t) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = t;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &t) {
    std::cout << "WrongAnimal copy assignment op called" << std::endl;
    _type = t.getType();
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "Generic wrong animal sound" << std::endl;
}

std::string const &WrongAnimal::getType() const { return _type; };
