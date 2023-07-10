/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:39:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 05:01:33 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
  public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);

  private:
    std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif // ZOMBIE_HPP
