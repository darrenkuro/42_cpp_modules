/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:33 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 20:58:26 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val) : _rawBits(val << _nFractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val)
    : _rawBits(std::roundf(val * (1 << _nFractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
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

void Fixed::setRawBits(int const raw) { _rawBits = raw; };

int Fixed::toInt(void) const { return _rawBits >> _nFractionalBits; }

float Fixed::toFloat(void) const {
    return (float)this->_rawBits / (1 << _nFractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &t) {
    os << t.toFloat();
    return os;
}
