/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 02:54:56 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat darren("Darren", 150);
        std::cout << darren << std::endl;
        Bureaucrat fred("Fred", 2);
        // darren.decrementGrade();
        std::cout << fred << std::endl;
        fred.incrementGrade();
        std::cout << fred << std::endl;
        fred.incrementGrade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
