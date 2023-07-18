/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:30 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 13:56:43 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(int const val);
    Fixed(float const val);
    Fixed(Fixed const &t);
    ~Fixed();

    Fixed &operator=(Fixed const &t);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

    bool operator>(Fixed const &t) const;
    bool operator<(Fixed const &t) const;
    bool operator>=(Fixed const &t) const;
    bool operator<=(Fixed const &t) const;
    bool operator==(Fixed const &t) const;
    bool operator!=(Fixed const &t) const;
    Fixed operator+(Fixed const &t) const;
    Fixed operator-(Fixed const &t) const;
    Fixed operator*(Fixed const &t) const;
    Fixed operator/(Fixed const &t) const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static Fixed const &min(Fixed const &a, Fixed const &b);
    static Fixed const &max(Fixed const &a, Fixed const &b);

  private:
    static int const _nFractionalBits = 8;
    int _rawBits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &t);

#endif // FIXED_HPP
