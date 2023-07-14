/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:19:55 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 22:46:14 by dlu              ###   ########.fr       */
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
    *this = t;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &t) {
    _type = t.getType();
    std::cout << "WrongAnimal copy assignment op called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "Generic wrong animal sound" << std::endl;
}

std::string const &WrongAnimal::getType() const { return _type; };
