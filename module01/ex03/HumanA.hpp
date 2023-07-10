/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:00:15 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 07:33:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA {
  public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack(void) const;

  private:
    std::string _name;
    Weapon &_weapon;
};

#endif // HUMANA_HPP
