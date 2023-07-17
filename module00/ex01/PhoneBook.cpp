/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:20:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/17 19:15:50 by dlu              ###   ########.fr       */
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
    } while (!_contacts[_count % MAX].setField(FirstName, input) &&
             !std::cin.eof());
    do {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setField(LastName, input) &&
             !std::cin.eof());
    do {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setField(NickName, input) &&
             !std::cin.eof());
    do {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setField(PhoneNumber, input) &&
             !std::cin.eof());
    do {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, input);
    } while (!_contacts[_count % MAX].setField(DarkestSecret, input) &&
             !std::cin.eof());
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
    std::string idx;
    while (true) {
        std::cout << "> Enter index: ";
        std::getline(std::cin, idx);
        if (std::cin.eof())
            return;
        std::istringstream iss(idx);
        int i;
        if (iss >> i) {
            if (i >= 0 && i < _count && i < MAX) {
                _contacts[i].displayFull();
                return;
            } else {
                std::cerr << "Invalid index: " << idx << ". Try again."
                          << std::endl;
            }
        } else {
            std::cerr << "Invalid input: " << idx << ". Try again."
                      << std::endl;
        }
    }
}
