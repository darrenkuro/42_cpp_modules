/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:44:18 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 13:32:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain()) {
    std::cout << "Dog constructor called" << std::endl;
    _type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog::Dog(Dog const &t) {
    std::cout << "Dog copy constructor called" << std::endl;
	_type = t._type;
    _brain = new Brain(*t._brain);
};

Dog &Dog::operator=(Dog const &t) {
    std::cout << "Dog copy constructor called" << std::endl;
    if (this != &t) {
        _type = t._type;
        delete _brain;
        _brain = new Brain(*t._brain);
    }
    return *this;
};

void Dog::makeSound() const {
    std::cout << "Making dog sound! Woof, woof!" << std::endl;
}

Brain *Dog::getBrain(void) const { return _brain; }
