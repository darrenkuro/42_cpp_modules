/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:24:12 by dlu               #+#    #+#             */
/*   Updated: 2023/06/15 06:14:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

const std::string DEFAULT_MSG = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
const std::string WHITESPACE = " \n\r\t\f\v";

static std::string	trim_whitespace(const std::string &str)
{
	size_t start = str.find_first_not_of(WHITESPACE);
	size_t end = str.find_last_not_of(WHITESPACE);

	if (start == std::string::npos)
		return ("");
	return (str.substr(start, end - start + 1));
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << DEFAULT_MSG << std::endl, EXIT_SUCCESS);
	for (int i = 1; i < ac; i++)
	{
		std::string trimmed = trim_whitespace(av[i]);
		for (int j = 0; trimmed[j]; j++)
			std::cout << (char) std::toupper(trimmed[j]);
		if (i < ac - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
