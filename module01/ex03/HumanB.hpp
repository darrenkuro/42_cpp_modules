/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:00:15 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 12:20:49 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
  public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void) const;
    void setWeapon(Weapon &weapon);

  private:
    std::string _name;
    Weapon *_weapon;
};

#endif // HUMANB_HPP
