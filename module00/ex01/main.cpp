/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:58:43 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 09:48:31 by dlu              ###   ########.fr       */
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
        std::cout << "> ";
        std::getline(std::cin, command);
        if (std::cin.eof() || command == "EXIT") {
            std::cout << "EXIT" << std::endl;
            break;
        } else if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else {
            std::cerr << "Unrecognized command: " << command << std::endl;
            std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
