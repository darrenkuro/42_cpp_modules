/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:27 by dlu               #+#    #+#             */
/*   Updated: 2023/08/03 13:56:46 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat darren("Darren", 150);
        Bureaucrat fred("Fred", 10);
        //Form form1("Form1", 10, 0);
        //Form form2("Form2", 0, 0);
        //Form form3("Form3", 151, 1);
        //Form form4("Form4", 0, 151);
        //Form form5("Form5", 151, 151);
        //Form form6("Form6", 0, 10);
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
