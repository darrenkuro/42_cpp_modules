/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:42:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 21:46:52 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}
Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

void Cat::makeSound() const {
    std::cout << "Making cat sound! Meow, meow!" << std::endl;
}
