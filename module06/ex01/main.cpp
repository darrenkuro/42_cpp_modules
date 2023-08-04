/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:15:45 by dlu               #+#    #+#             */
/*   Updated: 2023/08/04 15:28:52 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
    Serializer test;
    Data str("abc");
    std::cout << &str << std::endl;
    std::cout << test.deserialize(test.serialize(&str)) << std::endl;
    return 0;
}
