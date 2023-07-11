/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:30:45 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 19:51:24 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: wrong argument count, should be 2." << std::endl;
        return EXIT_FAILURE;
    }

    std::string level = av[1];
    Harl harl;
    harl.complain(level);
    return EXIT_SUCCESS;
}
