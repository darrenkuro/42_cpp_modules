/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:29:16 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 06:42:47 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void) {
    Array<std::string> arr_str;
    Array<int> arr_int(10);
    Array<int> arr_int2(15);
    arr_int[0] = 10;
    arr_int2[0] = 42;
    try {
        std::cout << arr_int[0] << std::endl;
        std::cout << arr_str[0] << std::endl;
        std::cout << arr_int[11] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    arr_int = arr_int2;
    std::cout << arr_int[0] << std::endl;
    Array<int> arr_int3(arr_int2);
    std::cout << arr_int3[0] << std::endl;
    return 0;
}
