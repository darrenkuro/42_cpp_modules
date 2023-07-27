/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:11:41 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 09:20:32 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
};

template <typename T>
T min(T &a, T &b) {
    return a < b ? a : b;
};

template <typename T>
T max(T &a, T &b) {
    return a > b ? a : b;
};

#endif // WHATEVER_HPP
