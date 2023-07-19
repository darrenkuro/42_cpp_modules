/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:09:13 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 10:46:30 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int main(void) {
    FragTrap fragtrap("Darren");
    fragtrap.attack("Target");
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(400);
    fragtrap.highFivesGuys();
    fragtrap.attack("Target");
    return EXIT_SUCCESS;
}
