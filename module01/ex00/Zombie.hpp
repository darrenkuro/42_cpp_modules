/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:39:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:13:37 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
  public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);

    void announce(void);

  private:
    std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif // ZOMBIE_HPP
