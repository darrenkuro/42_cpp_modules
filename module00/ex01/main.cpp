/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:58:43 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 12:42:16 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void) {
    PhoneBook phonebook;
    std::string command;

    std::cout << "Welcome to PhoneBook. Please enter ADD / SEARCH / EXIT."
              << std::endl;
    while (true) {
        std::cout << "> Enter Command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cerr << "Unrecognized command: " << command << std::endl
                      << "Please enter ADD / SEARCH / EXIT. " << std::endl;
        if (std::cin.eof())
            break;
    }
    std::cout << "EXIT" << std::endl;
    return EXIT_SUCCESS;
}
