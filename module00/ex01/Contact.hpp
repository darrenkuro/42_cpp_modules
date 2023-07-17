/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:08:49 by dlu               #+#    #+#             */
/*   Updated: 2023/07/17 19:16:47 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>
#include <sstream>

typedef enum field {
    FirstName,
    LastName,
    NickName,
    PhoneNumber,
    DarkestSecret
} field;

class Contact {
  public:
    Contact();
    ~Contact();
    void setIndex(int const idx);
    bool setField(field const field, std::string const input);
    void displayLine(void);
    void displayFull(void);

  private:
    static int const fieldWidth = 10;
    int _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
    void printField(std::string const field) const;
};

#endif // CONTACT_HPP
