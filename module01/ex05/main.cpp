/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:30:45 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 12:45:05 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    std::string level = "DEBUG";
    Harl harl;
    std::cout << "DEBUG level: ";
    harl.complain(level);
    level = "INFO";
    std::cout << "INFO level: ";
    harl.complain(level);
    level = "WARNING";
    std::cout << "WARNING level: ";
    harl.complain(level);
    level = "ERROR";
    std::cout << "ERROR level: ";
    harl.complain(level);
    return EXIT_SUCCESS;
}
