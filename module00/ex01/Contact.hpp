/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:08:49 by dlu               #+#    #+#             */
/*   Updated: 2023/06/15 06:15:46 by dlu              ###   ########.fr       */
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
  void init(void);
  void view(int index) const;
  void display(int index) const;
  void setIndex(int i);

private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;
  int index;

  std::string _printLen(std::string str) const;
  std::string _getInput(std::string str) const;
};

#endif // CONTACT_HPP
