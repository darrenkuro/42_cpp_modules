/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:18:20 by dlu               #+#    #+#             */
/*   Updated: 2023/07/29 19:02:47 by dlu              ###   ########.fr       */
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
    std::cout << *it << std::endl;
    return 0;
}
