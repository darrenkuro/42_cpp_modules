/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:34:31 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 21:46:02 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { std::cout << "Animal constructor called" << std::endl; }
Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }
Animal::Animal(Animal const &t) {
    *this = t;
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(Animal const &t) {
    _type = t.getType();
    std::cout << "Animal copy assignment op called" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound" << std::endl;
}

std::string const &Animal::getType() const { return _type; };
