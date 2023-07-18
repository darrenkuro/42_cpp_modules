/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:53:44 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:30:57 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}
Point::~Point() {}
Point::Point(Point const &t) : _x(t._x), _y(t._y) {}
Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point &Point::operator=(Point const &t) {
    if (this != &t) {
        _x = t.getX();
        _y = t.getY();
    }
    return *this;
}

Fixed const Point::getX(void) const { return _x; }
Fixed const Point::getY(void) const { return _y; }
