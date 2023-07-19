/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:09:13 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 10:40:02 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int main(void) {
    ClapTrap claptrap("Darren");
    ScavTrap scavtrap("Fred");

    scavtrap.guardGate();
    claptrap.attack("Target");
    claptrap.takeDamage(8);
    claptrap.beRepaired(2);

    scavtrap.attack("Darren");
    claptrap.takeDamage(20);
    scavtrap.takeDamage(100);
    scavtrap.attack("Darren");
    scavtrap.guardGate();
    return EXIT_SUCCESS;
}
