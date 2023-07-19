/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:33 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 10:27:08 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val) : _rawBits(val << _nFractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

/**
 * Note:
 * For fixed point number, its bit value (as int) is the same as its
 * value * (2^fractional bits), 256 (8^2) in this case. It's multiplying
 * 2 eight times, since moving binary point left and right is effectively
 * divided by or multiply by 2.
 * In this case, val * (1 << _nFranctionalBits) is the same as
 * val * (2 ** _nFranctionalBits).
 * std::roundf is available after c++11. Cast to int always truncates.
 * val >= 0.0f
 *  ? static_cast<int>(val * (1 << _nFractionalBits) + 0.5f)
 *  : static_cast<int>(val * (1 << _nFractionalBits) - 0.5f)
 * works too.
 */
Fixed::Fixed(float const val)
    : _rawBits(roundf(val * (1 << _nFractionalBits))) {
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
    return static_cast<float>(_rawBits) / (1 << _nFractionalBits);
}

/**
 * The << operator for std::ostream is defined as a non-member function, and it
 * cannot be declared as a member function of a class.
 * The non-member operator<< function will be found via argument-dependent
 * lookup (ADL) because of the type involved in the operation.
 * */
std::ostream &operator<<(std::ostream &os, const Fixed &t) {
    os << t.toFloat();
    return os;
}
