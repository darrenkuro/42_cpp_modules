/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:43:31 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 03:45:24 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
  public:
    DiamondTrap(std::string name);
    ~DiamondTrap();

    using ScavTrap::attack;
    void whoAmI(void);

  private:
    std::string _name;
};

#endif // DIAMOND_TRAP
