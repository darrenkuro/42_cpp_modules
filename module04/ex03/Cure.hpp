/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:17:59 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 20:32:51 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
  public:
    Cure();
    ~Cure();
    Cure(const Cure &t);

    Cure &operator=(const Cure &t);

    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif // CURE_HPP
