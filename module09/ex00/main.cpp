/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:05:46 by dlu               #+#    #+#             */
/*   Updated: 2023/08/25 02:19:40 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: Wrong number of argument." << std::endl;
        return 1;
    }

    try {
        BitcoinExchange btc;
        btc.printResult(av[1]);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
