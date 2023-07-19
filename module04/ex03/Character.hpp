/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:19:49 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 07:16:54 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
  public:
    Character();
    ~Character();
    Character(std::string const &name);
    Character(Character const &t);

    Character &operator=(Character const &t);

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

  private:
    static const int inventorySize = 4;

    std::string _name;
    AMateria *_inventory[inventorySize];
    int _nEquiped;
};

#endif // CHARACTER_HPP
