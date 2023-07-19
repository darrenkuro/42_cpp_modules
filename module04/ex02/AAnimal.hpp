/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:29:25 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:33:24 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
  public:
    AAnimal();
    AAnimal(AAnimal const &t);
    virtual ~AAnimal();

    AAnimal &operator=(AAnimal const &t);

    virtual void makeSound() const = 0;
    std::string const &getType() const;

  protected:
    std::string _type;
};

#endif // AANIMAL_HPP
