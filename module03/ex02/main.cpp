/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:09:13 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 17:25:06 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int main(void) {
    ClapTrap claptrap("Darren");
    ScavTrap scavtrap("Fred");

    claptrap.attack("Target");
    claptrap.takeDamage(8);
    claptrap.beRepaired(2);

    scavtrap.attack("Darren");
    claptrap.takeDamage(20);
    scavtrap.takeDamage(100);
    scavtrap.attack("Darren");

    FragTrap fragtrap("Ugh");
    fragtrap.attack("Target");
    fragtrap.highFivesGuys();
    return EXIT_SUCCESS;
}
