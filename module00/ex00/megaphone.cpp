/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:24:12 by dlu               #+#    #+#             */
/*   Updated: 2023/07/10 16:26:08 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

const std::string DEFAULT_MSG = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

/* Change entire string to upper cases. */
std::string	ft_toupper(char *str) {
	std::string	ret = str;

	for(int i = 0; i < (int) ret.size(); i++)
		ret[i] = std::toupper(str[i]);
	return ret;
}

int	main(int ac, char **av) {
	if (ac == 1)
		std::cout << DEFAULT_MSG;
	else
		for (int i = 1; i < ac; i++)
			std::cout << ft_toupper(av[i]);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
