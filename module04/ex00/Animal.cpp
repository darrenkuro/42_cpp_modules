/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:34:31 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:18:09 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { std::cout << "Animal constructor called" << std::endl; }
Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }
Animal::Animal(Animal const &t) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = t;
}
Animal &Animal::operator=(Animal const &t) {
    std::cout << "Animal copy assignment op called" << std::endl;
    _type = t.getType();
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound" << std::endl;
}

std::string const &Animal::getType() const { return _type; };
