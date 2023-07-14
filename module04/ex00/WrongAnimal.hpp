/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:49:51 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 22:30:11 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
  public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &t);
    virtual ~WrongAnimal();

    WrongAnimal &operator=(WrongAnimal const &t);

    void makeSound() const;
    std::string const &getType() const;

  protected:
    std::string _type;
};

#endif // WRONGANIMAL_HPP
