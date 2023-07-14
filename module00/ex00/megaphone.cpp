/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:24:12 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:38:35 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

std::string ft_toupper(char *str) {
    std::string upper = str;

    for (size_t i = 0; i < upper.size(); i++)
        upper[i] = std::toupper(str[i]);
    return upper;
}

int main(int ac, char **av) {
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < ac; i++)
            std::cout << ft_toupper(av[i]);
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
