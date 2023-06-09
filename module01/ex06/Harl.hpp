/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:07:17 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:06:47 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
  public:
    Harl();
    ~Harl();
    void complain(std::string level);

  private:
    static int const MAX_LEVEL = 4;

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

typedef void (Harl::*func)(void);

#endif // HARL_HPP
