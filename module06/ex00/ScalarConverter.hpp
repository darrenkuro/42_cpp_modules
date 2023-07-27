/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:44:10 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 08:44:18 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {
  public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter const &t);

    ScalarConverter &operator=(ScalarConverter const &t);

    static void convert(std::string const str);

  private:
    char _char;
    int _int;
    float _float;
    double _double;
};

std::ostream &operator<<(std::ostream &os, ScalarConverter const &t);

#endif // SCALARCONVERTER_HPP
