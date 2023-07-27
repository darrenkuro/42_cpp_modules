/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 07:38:51 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
    try {
        Intern rando;
        AForm *form;

        form = rando.makeForm("robotomy request", "Bender");
        std::cout << form->getName() << std::endl;
        delete form;
        form = rando.makeForm("wrong request", "Bender");

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
