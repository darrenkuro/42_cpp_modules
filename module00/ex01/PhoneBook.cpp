/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:20:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 10:48:23 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(void) {
    std::string input;

    _contacts[_index].setIndex(_index);
    std::cout << "First name: ";
    std::getline(std::cin, input);
    _contacts[_index].setFirstName(input);
    std::cout << "Last name: ";
    std::getline(std::cin, input);
    _contacts[_index].setLastName(input);
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    _contacts[_index].setNickname(input);
    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    _contacts[_index].setPhoneNumber(input);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    _contacts[_index].setDarkestSecret(input);
    _index = _index + 1 >= MAX ? 0 : _index + 1;
}

void PhoneBook::printSearchHeader(void) const {
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::searchContact(void) {
    if (_contacts[0].isEmpty()) {
        std::cout << "PhoneBook is empty, please add contacts." << std::endl;
        return;
    }
    printSearchHeader();
    for (int i = 0; i < MAX; i++)
        if (!_contacts[i].isEmpty())
            _contacts[i].displayLine();
    std::cout << "|-------------------------------------------|" << std::endl;
}
