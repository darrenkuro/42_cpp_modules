/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:06:44 by dlu               #+#    #+#             */
/*   Updated: 2023/08/27 02:53:59 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error: Wrong number of arguments!" << std::endl;
        return 1;
    }

    try {
        PmergeMe pMergeMe;
        pMergeMe.printResult(ac - 1, &av[1]);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
