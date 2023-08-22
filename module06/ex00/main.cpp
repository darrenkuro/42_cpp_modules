/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:46:16 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 04:51:05 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Wrong number of args!" << std::endl;
        return 1;
    }

    ScalarConverter converter;
    converter.convert(av[1]);
    converter.print();
    return 0;
}
