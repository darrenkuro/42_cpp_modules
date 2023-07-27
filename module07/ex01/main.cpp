/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:22:09 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 10:22:31 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void) {
    int tab[] = {0, 1, 2};
    std::string tab2[] = {"hello", "world", "yep"};

    iter(tab, 3, print<int>);
    iter(tab2, 3, print<std::string>);

    return 0;
}
