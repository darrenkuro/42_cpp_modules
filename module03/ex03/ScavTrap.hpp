/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:13:53 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 03:49:30 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &t);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &t);

    void attack(std::string const &target);
    void guardGate(void);
};

#endif // SCAVTRAP_HPP
