/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:53:44 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 10:33:18 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}
Point::~Point() {}
Point::Point(Point const &t) : _x(t._x), _y(t._y) {}
Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point &Point::operator=(Point const &t) {}

Fixed const Point::getX(void) const { return _x; }
Fixed const Point::getY(void) const { return _y; }
