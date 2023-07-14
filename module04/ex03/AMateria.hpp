/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:58:52 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 20:12:49 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria {
  public:
    AMateria();
    virtual ~Amateria();
    AMateria(std::string const &type);
    AMateria(Amateria const &t);

    AMateria &operator=(AMateria const &t);

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

  protected:
    std::string _type;
};

#endif // AMATERIA_HPP
