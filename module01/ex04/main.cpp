/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:42:53 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 10:22:43 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <cstdlib>

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Error: Wrong number of arguments." << std::endl;
        std::cerr << "./replacer [Filename] [string 1] [string 2]" << std::endl;
        return EXIT_FAILURE;
    }
    Replacer replacer(av[1]);
    if (!replacer.execute(av[2], av[3]))
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
