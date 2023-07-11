/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:08:49 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 12:18:55 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact {
  public:
    Contact();
    ~Contact();
    void setIndex(int const index);
    bool setFirstName(std::string const input);
    bool setLastName(std::string const input);
    bool setNickname(std::string const input);
    bool setPhoneNumber(std::string const input);
    bool setDarkestSecret(std::string const input);
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
