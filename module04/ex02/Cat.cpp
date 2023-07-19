/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:42:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 13:33:07 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain()) {
    std::cout << "Cat constructor called" << std::endl;
    _type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat::Cat(Cat const &t) {
    std::cout << "Cat copy constructor called" << std::endl;
    _type = t._type;
    _brain = new Brain(*t._brain);
};

Cat &Cat::operator=(Cat const &t) {
    std::cout << "Cat copy constructor called" << std::endl;
    if (this != &t) {
        _type = t._type;
        delete _brain;
        _brain = new Brain(*t._brain);
    }
    return *this;
};

void Cat::makeSound(void) const {
    std::cout << "Making cat sound! Meow, meow!" << std::endl;
}

Brain *Cat::getBrain(void) const { return _brain; }
