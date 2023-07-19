/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:04:30 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 08:02:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
  public:
    Ice();
    //~Ice();
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif // ICE_HPP
