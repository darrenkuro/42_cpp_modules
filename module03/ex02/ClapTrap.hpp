/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:40:50 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 16:48:50 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &t);
    ~ClapTrap();

    ClapTrap &operator=(ClapTrap const &t);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
};

#endif // CLAPTRAP_HPP
