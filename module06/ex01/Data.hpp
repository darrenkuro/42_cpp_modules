/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:24:49 by dlu               #+#    #+#             */
/*   Updated: 2023/08/04 15:16:19 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data {
  public:
    Data();
    ~Data();
    Data(Data &t);
    Data(std::string str);

    Data &operator=(Data &t);

  private:
    std::string _str;
};

#endif // DATA_HPP
