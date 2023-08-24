/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:18:20 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 15:48:45 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main(void) {
    // This syntax isn't supported until c++03
    // std::vector<int> test = {0, 1, 2, 3};
    std::vector<int> test;
    test.push_back(0);
    test.push_back(1);
    test.push_back(2);

    std::vector<int>::iterator it = easyfind(test, 1);
    if (it == test.end())
        std::cout << "end" << std::endl;
    std::cout << *it << std::endl;
    std::vector<int>::iterator it2 = easyfind(test, 3);
    if (it2 == test.end())
        std::cout << "end" << std::endl;
    std::cout << *it2 << std::endl;
    return 0;
}
