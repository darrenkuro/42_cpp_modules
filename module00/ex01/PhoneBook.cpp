/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:20:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 11:42:46 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(void) {
    std::string input;

    _contacts[_count % MAX].setIndex(_count % MAX);
    do {
        std::cout << "First name: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setFirstName(input));
    do {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setLastName(input));
    do {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setNickname(input));
    do {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setPhoneNumber(input));
    do {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setDarkestSecret(input));
    _count++;
}

void PhoneBook::printSearchHeader(void) {
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < _count && i < MAX; i++)
        _contacts[i].displayLine();
    std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::searchContact(void) {
    if (_count == 0) {
        std::cout << "PhoneBook is empty, please add contacts." << std::endl;
        return;
    }
    printSearchHeader();
    std::string index;
    while (true) {
        std::cout << "Enter index: ";
        std::getline(std::cin, index);
        if (std::cin.eof())
            return;
        try {
            int i = std::stoi(index);
            if (i >= 0 && i < _count && i < MAX) {
                _contacts[std::stoi(index)].displayFull();
                return;
            } else
                std::cerr << "Invalid index " << index << ". Try again."
                          << std::endl;
        } catch (const std::invalid_argument &e) {
            std::cerr << "Invalid input: " << index << ". Try again."
                      << std::endl;
        }
    }
}
