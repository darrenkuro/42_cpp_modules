/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:09:13 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 10:52:35 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <cstdlib>

int main(void) {
    DiamondTrap diamondtrap("Darren");

    diamondtrap.attack("Target");
    diamondtrap.takeDamage(8);
    diamondtrap.beRepaired(2);
	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();
    diamondtrap.whoAmI();
    return EXIT_SUCCESS;
}
