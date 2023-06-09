/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:30 by dlu               #+#    #+#             */
/*   Updated: 2023/07/12 20:12:37 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(Fixed const &t);
    ~Fixed();

    Fixed &operator=(Fixed const &t);

    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    static int const _nFractionalBits = 8;
    int _rawBits;
};

#endif // FIXED_HPP
