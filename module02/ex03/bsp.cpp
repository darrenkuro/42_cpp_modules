/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:06:32 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:29:07 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Signed area using Shoelace formula
Fixed sign(Point const p1, Point const p2, Point const p3) {
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
           (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    bool b1, b2, b3;

    b1 = sign(point, a, b) < 0;
    b2 = sign(point, b, c) < 0;
    b3 = sign(point, c, a) < 0;

    return ((b1 == b2) && (b2 == b3));
}

/*
// ???
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed const x_ap = point.getX() - a.getX();
    Fixed const y_ap = point.getY() - a.getY();
    bool inside_ab =
        (b.getX() - a.getX()) * y_ap - (b.getX() - a.getX()) * x_ap > 0;

    if ((c.getX() - a.getX()) * y_ap - (c.getY() - a.getY()) * x_ap > 0 ==
        inside_ab)
        return false;
    if ((c.getX() - b.getX()) * (point.getY() - b.getY()) -
                (c.getY() - b.getY()) * (point.getX() - b.getX()) >
            0 !=
        inside_ab)
        return false;
    return true;
}
*/
