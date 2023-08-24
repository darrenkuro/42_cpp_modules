/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:18:22 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 15:45:57 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

/**
 * std::find will return it.end() if not found.
 */
template <typename T>
typename T::iterator easyfind(T &container, int value) {
    return std::find(container.begin(), container.end(), value);
};

#endif // EASYFIND_HPP
