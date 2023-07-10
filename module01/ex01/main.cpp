/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 04:42:58 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 07:34:43 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int count = 5;

    Zombie *horde = zombieHorde(count, "Darren");
    for (int i = 0; i < count; i++) {
        std::cout << "[Zombie " << i << "] ";
        horde[i].announce();
    }
    delete[] horde;
    return EXIT_SUCCESS;
}
