/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:53:45 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 21:06:25 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point {
  public:
    Point();
    ~Point();
    Point(Point const &t);
    Point(float const x, float const y);

    Point &operator=(Point const &t);

  private:
    Fixed _x;
    Fixed _y;
};

#endif // POINT_HPP
