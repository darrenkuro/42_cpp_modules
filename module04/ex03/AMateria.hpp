/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:58:52 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 09:04:48 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
class ICharacter;

class AMateria {
  public:
    AMateria();
    virtual ~AMateria();
    AMateria(std::string const &type);
    AMateria(AMateria const &t);

    AMateria &operator=(AMateria const &t);

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

  protected:
    std::string _type;
};

#endif // AMATERIA_HPP
