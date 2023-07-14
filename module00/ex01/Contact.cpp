/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:39:21 by dlu               #+#    #+#             */
/*   Updated: 2023/07/14 21:41:35 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setIndex(int const index) { _index = index; }

bool Contact::setField(field const field, std::string const input) {
    if (input.empty()) {
        std::cerr << "Field cannot be empty." << std::endl;
        return false;
    }
    switch (field) {
    case firstname:
        _firstName = input;
    case lastname:
        _lastName = input;
    case nickname:
        _nickname = input;
    case phonenumber:
        _phoneNumber = input;
    case darkestsecret:
        _darkestSecret = input;
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
