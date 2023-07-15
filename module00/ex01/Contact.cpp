/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:39:21 by dlu               #+#    #+#             */
/*   Updated: 2023/07/15 07:24:43 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setIndex(int const idx) { _index = idx; }

bool Contact::setField(field const field, std::string const input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty!" << std::endl;
        return false;
    }
    switch (field) {
    case FirstName:
        _firstName = input;
        break;
    case LastName:
        _lastName = input;
        break;
    case NickName:
        _nickname = input;
        break;
    case PhoneNumber:
        _phoneNumber = input;
        break;
    case DarkestSecret:
        _darkestSecret = input;
        break;
    default:
        std::cerr << "Invalid field index!" << std::endl;
        return false;
    }
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
