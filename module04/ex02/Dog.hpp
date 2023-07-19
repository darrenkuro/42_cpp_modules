/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:29:07 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 13:39:53 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
  public:
    Dog();
    virtual ~Dog();
    Dog(Dog const &t);

    Dog &operator=(Dog const &t);

    void makeSound(void) const;
    Brain *getBrain(void) const;

  private:
    Brain *_brain;
};

#endif // DOG_HPP
