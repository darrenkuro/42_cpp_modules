/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:44:18 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:19:37 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    _type = "Dog";
}
Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

void Dog::makeSound() const {
    std::cout << "Making dog sound! Woof, woof!" << std::endl;
}
