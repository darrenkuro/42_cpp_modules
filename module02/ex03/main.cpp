/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:28 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:31:36 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
    Point a(0.0f, 0.0f);
    Point b(4.0f, 0.0f);
    Point c(2.0f, 4.0f);

    Point test(1.0f, 1.0f);

    std::cout << bsp(a, b, c, test) << std::endl;
    std::cout << bsp(a, c, b, test) << std::endl;
    std::cout << bsp(b, a, c, test) << std::endl;
    std::cout << bsp(b, c, a, test) << std::endl;
    std::cout << bsp(c, b, a, test) << std::endl;
    std::cout << bsp(c, a, b, test) << std::endl;

    return 0;
}
