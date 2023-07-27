/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 04:22:13 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat darren("Darren", 150);
        Bureaucrat fred("Fred", 10);
        Form formA("FormA", 10, 5);
        Form formB("FormB", 5, 1);
        std::cout << formA << std::endl;
        // Form formC("FormC", 150, 151); // Invalid constructor
        fred.signForm(formA); // success
        fred.signForm(formB);
        // formB.beSigned(fred); // fail
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
