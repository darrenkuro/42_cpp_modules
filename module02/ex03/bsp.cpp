/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:06:32 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 15:49:54 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed b1 = (a.getX() - c.getX()) * (point.getY() - c.getY()) -
               (a.getY() - c.getY()) * (point.getX() - c.getX());
    Fixed b2 = (b.getX() - a.getX()) * (point.getY() - a.getY()) -
               (b.getY() - a.getY()) * (point.getX() - a.getX());
    Fixed b3 = (c.getX() - b.getX()) * (point.getY() - b.getY()) -
               (c.getY() - b.getY()) * (point.getX() - b.getX());

    if ((b1 < 0) != (b2 < 0) || b1 == 0 || b2 == 0 || b3 == 0)
        return false;
    return (b3 < 0) == (b1 + b2 < 0);
}
