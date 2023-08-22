/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:22:23 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 16:21:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

/**
 * If function is explicitly declared,
 * i.e. void (*f)(T const &), void (*f)(T &).
 * Using a template, complier would be able to deduce any type passed in.
 */
template <typename T, typename F>
void iter(T *arr, unsigned int length, F f) {
    for (unsigned int i = 0; i < length; i++)
        f(arr[i]);
};

/* For testing purpose. */
#include <iostream>

template <typename T>
void output(T const &x) {
    std::cout << x << std::endl;
};

#endif // ITER_HPP
