/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:22:26 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 12:18:58 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
  public:
    PhoneBook();
    ~PhoneBook();
    void addContact(void);
    void searchContact(void);

  private:
    static int const MAX = 8;
    int _count;
    Contact _contacts[MAX];
    void printSearchHeader(void);
};

#endif // PHONEBOOK_HPP
