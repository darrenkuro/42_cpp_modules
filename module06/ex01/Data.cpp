/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:24:51 by dlu               #+#    #+#             */
/*   Updated: 2023/08/04 15:15:33 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}
Data::~Data() {}
Data::Data(Data &t) { _str = t._str; }
Data::Data(std::string str) : _str(str) {}

Data &Data::operator=(Data &t) {
    if (this == &t)
        return *this;
    return *this;
}
