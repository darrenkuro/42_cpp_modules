/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:39:21 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 11:41:38 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setIndex(int const index) { _index = index; }

bool Contact::setFirstName(std::string input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty." << std::endl;
        return false;
    }
    _firstName = input;
    return true;
}

bool Contact::setLastName(std::string input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty." << std::endl;
        return false;
    }
    _lastName = input;
    return true;
}

bool Contact::setNickname(std::string input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty." << std::endl;
        return false;
    }
    _nickname = input;
    return true;
}

bool Contact::setPhoneNumber(std::string input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty." << std::endl;
        return false;
    }
    _phoneNumber = input;
    return true;
}

bool Contact::setDarkestSecret(std::string input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty." << std::endl;
        return false;
    }
    _darkestSecret = input;
    return true;
}

void Contact::printField(std::string const field) const {
    if (field.length() > fieldWidth)
        std::cout << field.substr(0, fieldWidth - 1) << ".";
    else
        std::cout << std::right << std::setw(fieldWidth) << field;
    std::cout << "|";
}

void Contact::displayLine(void) {
    std::cout << "|";
    printField(std::to_string(_index));
    printField(_firstName);
    printField(_lastName);
    printField(_nickname);
    std::cout << std::endl;
}

void Contact::displayFull(void) {
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}
