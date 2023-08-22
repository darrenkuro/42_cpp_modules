/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:15:45 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 16:05:08 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
    Data str("abc");
    std::cout << &str << std::endl;
    std::cout << Serializer::deserialize(Serializer::serialize(&str))
              << std::endl;
    return 0;
}
