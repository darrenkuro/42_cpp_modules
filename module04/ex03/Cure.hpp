/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:17:59 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 08:02:29 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
  public:
    Cure();
    //~Cure();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif // CURE_HPP
