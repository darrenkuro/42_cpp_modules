/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:29:25 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:19:01 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  public:
    Animal();
    Animal(Animal const &t);
    /**
     * Notes:
     * Virtual destructor is to make sure derived class instances
     * that's declared as this class would be called properly.
     */
    virtual ~Animal();

    Animal &operator=(Animal const &t);

    virtual void makeSound() const;
    std::string const &getType() const;

  protected:
    std::string _type;
};

#endif // ANIMAL_HPP
