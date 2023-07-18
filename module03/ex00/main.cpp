/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:09:13 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:43:13 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

int main(void) {
    ClapTrap claptrap("Darren");

    claptrap.attack("Target");
    claptrap.takeDamage(8);
    claptrap.beRepaired(2);
	claptrap.takeDamage(5);
	claptrap.attack("Dead");
    return EXIT_SUCCESS;
}
