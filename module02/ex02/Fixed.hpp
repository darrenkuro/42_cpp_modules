/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:55:30 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 23:35:53 by dlu              ###   ########.fr       */
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

    Fixed &operator++(void); // prefix
    Fixed &operator--(void); // prefix
    Fixed operator++(int);   // postfix
    Fixed operator--(int);   // postfix

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed const &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static Fixed const &max(const Fixed &a, const Fixed &b);

  private:
    static int const _nFractionalBits = 8;
    int _rawBits;
};

#endif // FIXED_HPP
