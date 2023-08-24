/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:11:06 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 17:18:02 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
    Span sp = Span(5);
    try {
        std::cout << sp.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try {
        sp.addNumber(1);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Span sp2 = Span(10);
        // std::cout << sp2.shortestSpan() << std::endl; exception
        std::vector<int> toadd;
        toadd.push_back(0);
        toadd.push_back(5);
        toadd.push_back(8);
        toadd.push_back(100);
        toadd.push_back(100);
        toadd.push_back(100);
        sp2.addRange(toadd.begin(), toadd.end());
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        // sp = sp2; // will throw overflow
        sp2 = sp;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
