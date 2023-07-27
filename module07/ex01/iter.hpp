/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:22:23 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 09:36:07 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
// void iter(T *arr, unsigned int length, void (*f)(T const &t)) {
//     for (unsigned int i = 0; i < length; i++)
//         f(arr[i]);
// };
void iter(T *arr, unsigned int length, void (*f)(T)) {
    for (unsigned int i = 0; i < length; i++)
        f(arr[i]);
};

#endif // ITER_HPP
