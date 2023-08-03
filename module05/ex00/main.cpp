/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/08/03 13:46:18 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    try {
        // Bureaucrat darren1("Darren1", 0);
        // Bureaucrat darren2("Darren2", 151);
        Bureaucrat darren("Darren", 150);
        std::cout << darren << std::endl;
        Bureaucrat fred("Fred", 2);
        Bureaucrat copy("Copy", 2);
        copy = fred; // name will not change, and that is expected behavior
        std::cout << "copy name: " << copy.getName() << std::endl;
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
