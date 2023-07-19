/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:29:05 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:33:51 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
  public:
    Cat();
    Cat(Cat const &t);
    ~Cat();

    Cat &operator=(Cat const &t);

    void makeSound(void) const;
    Brain *getBrain(void) const;

  private:
    Brain *_brain;
};

#endif // CAT_HPP
