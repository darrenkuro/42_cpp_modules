/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:33 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 10:53:28 by dlu              ###   ########.fr       */
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
    : _rawBits(val >= 0.0f
                   ? static_cast<int>(val * (1 << _nFractionalBits) + 0.5f)
                   : static_cast<int>(val * (1 << _nFractionalBits) - 0.5f)) {
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

int Fixed::getRawBits(void) const { return _rawBits; }

void Fixed::setRawBits(int const raw) { _rawBits = raw; };

int Fixed::toInt(void) const { return _rawBits >> _nFractionalBits; }

float Fixed::toFloat(void) const {
    return static_cast<float>(_rawBits) / (1 << _nFractionalBits);
}

bool Fixed::operator>(Fixed const &t) const {
    return _rawBits > t.getRawBits();
}

bool Fixed::operator<(Fixed const &t) const {
    return _rawBits < t.getRawBits();
}

bool Fixed::operator>=(Fixed const &t) const {
    return _rawBits >= t.getRawBits();
}

bool Fixed::operator<=(Fixed const &t) const {
    return _rawBits <= t.getRawBits();
}

bool Fixed::operator==(Fixed const &t) const {
    return _rawBits == t.getRawBits();
}

bool Fixed::operator!=(Fixed const &t) const {
    return _rawBits != t.getRawBits();
}

Fixed Fixed::operator+(Fixed const &t) const {
    return Fixed(toFloat() + t.toFloat());
}

Fixed Fixed::operator-(Fixed const &t) const {
    return Fixed(toFloat() - t.toFloat());
}

Fixed Fixed::operator*(Fixed const &t) const {
    return Fixed(toFloat() * t.toFloat());
}

Fixed Fixed::operator/(Fixed const &t) const {
    return Fixed(toFloat() / t.toFloat());
}

Fixed &Fixed::operator++(void) { return (++_rawBits, *this); }
Fixed &Fixed::operator--(void) { return (--_rawBits, *this); }
Fixed Fixed::operator++(int) {
    Fixed old(*this);
    _rawBits++;
    return old;
}
Fixed Fixed::operator--(int) {
    Fixed old(*this);
    _rawBits--;
    return old;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return a < b ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return a > b ? a : b; }
Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
    return a < b ? a : b;
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
    return a > b ? a : b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &t) {
    os << t.toFloat();
    return os;
}
