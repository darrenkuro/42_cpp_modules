/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:04:12 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:27:40 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
  public:
    Weapon();
    ~Weapon();
    Weapon(std::string type);

    std::string const &getType(void) const;
    void setType(std::string type);

  private:
    std::string _type;
};

#endif // WEAPON_HPP
