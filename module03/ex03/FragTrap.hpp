/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 03:36:45 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 03:55:42 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
  public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &t);
    ~FragTrap();

    FragTrap &operator=(FragTrap const &t);

    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP
