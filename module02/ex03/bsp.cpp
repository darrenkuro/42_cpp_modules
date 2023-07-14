/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:06:32 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 10:39:14 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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
