/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/08/03 14:13:18 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
    try {
        Intern rando;
        AForm *form;
        AForm *form1;
        AForm *form2;

        form = rando.makeForm("robotomy request", "Bender");
        form1 = rando.makeForm("presidential pardon", "Bender");
        form2 = rando.makeForm("shrubbery creation", "Bender");
        delete form;
        delete form1;
        delete form2;
        form = rando.makeForm("wrong request", "Bender");
        std::cout << "test" << std::endl;

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
