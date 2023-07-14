/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:33 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:09:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &t) {
    std::cout << "Copy constructor called" << std::endl;
    *this = t;
}

Fixed &Fixed::operator=(Fixed const &t) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &t)
        _rawBits = t.getRawBits();
    return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _rawBits;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _rawBits = raw;
};
