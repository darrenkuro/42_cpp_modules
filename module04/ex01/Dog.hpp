/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:29:07 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 12:54:04 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  public:
    Dog();
    ~Dog();
    Dog(Dog const &t);

    Dog &operator=(Dog const &t);

    void makeSound(void) const;
    Brain *getBrain(void) const;

  private:
    Brain *_brain;
};

#endif // DOG_HPP
