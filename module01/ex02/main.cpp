/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 06:51:28 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 10:21:35 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string    - addr: " << &string << ", value: " << string
              << std::endl;
    std::cout << "stringPTR - addr: " << stringPTR << ", value: " << *stringPTR
              << std::endl;
    std::cout << "stringREF - addr: " << &stringREF << ", value: " << stringREF
              << std::endl;

    return EXIT_SUCCESS;
}
