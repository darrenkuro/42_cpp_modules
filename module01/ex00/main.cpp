/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 04:42:58 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 10:16:22 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(void) {
    std::cout << "Calling randomChump" << std::endl;
    randomChump("chump");

    std::cout << "Calling new zombie (heap allocation)" << std::endl;
    Zombie *darren = newZombie("Darren");
    darren->announce();
    delete darren;

    return EXIT_SUCCESS;
}
