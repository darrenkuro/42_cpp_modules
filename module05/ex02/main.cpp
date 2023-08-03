/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/08/03 14:03:45 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    try {
        Bureaucrat darren("Darren", 150);
        Bureaucrat fred("Fred", 10);
        ShrubberyCreationForm formA("home");
        std::cout << formA << std::endl;
        fred.signForm(formA);
        // fred.executeForm(formA);
        darren.executeForm(formA);

        RobotomyRequestForm formB("Robot");
        fred.executeForm(formB);
        fred.signForm(formB);
        fred.executeForm(formB);
        fred.executeForm(formB);

        PresidentialPardonForm formC("Arthur");
        fred.signForm(formC);
        fred.executeForm(formC);
        Bureaucrat zaphod("Zaphod", 1);
        zaphod.executeForm(formC);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
