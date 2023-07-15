/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:28 by dlu               #+#    #+#             */
/*   Updated: 2023/07/15 07:43:07 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    // Custom tests
    Fixed c(42.42f); // actual value: 10860 => 42.421875
    Fixed d(80);
    std::cout << "=================================" << std::endl;
    Fixed e(c++);
    std::cout << ++c << std::endl;
    std::cout << e << std::endl;
    std::cout << c << std::endl;
    std::cout << d + e << std::endl;
    std::cout << d - e << std::endl;
    std::cout << d * e << std::endl;
    std::cout << d / e << std::endl;
    std::cout << Fixed::min(d, e) << std::endl;
    std::cout << Fixed::max(d, e) << std::endl;
    std::cout << "============== TURE ==============" << std::endl;
    std::cout << std::boolalpha << (c < d) << std::endl;
    std::cout << std::boolalpha << (c <= d) << std::endl;
    std::cout << std::boolalpha << (c == c) << std::endl;
    std::cout << "============== FALSE ==============" << std::endl;
    std::cout << std::boolalpha << (c > d) << std::endl;
    std::cout << std::boolalpha << (c >= d) << std::endl;
    std::cout << std::boolalpha << (c != c) << std::endl;

    return 0;
}
