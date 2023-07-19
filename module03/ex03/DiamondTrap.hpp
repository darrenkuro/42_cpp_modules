/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:43:31 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 05:01:37 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/**
 * Notes:
 * Constructors, copy constructors, and operator overloads,
 * if defined here, cannot be inherited.
 */
class DiamondTrap : public ScavTrap, public FragTrap {
  public:
    DiamondTrap(std::string name);
    ~DiamondTrap();

    using ScavTrap::attack;
    void whoAmI(void) const;

  private:
    std::string _name;
};

#endif // DIAMOND_TRAP
