/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 04:38:21 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:19:07 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Create a horde of zomebies and return the first one. */
Zombie *zombieHorde(int N, std::string name) {
    if (N < 1) {
        std::cerr << "A horde must contain at least 1 zombie." << std::endl;
        return NULL;
    }

    // Try catch block for protecting malloc in C
    try {
        Zombie *horde = new Zombie[N];
        for (int i = 0; i < N; i++)
            horde[i].setName(name);
        return horde;
    } catch (const std::bad_alloc &e) {
        std::cerr << "Failed to allocate memory: " << e.what() << std::endl;
        return NULL;
    }
}
