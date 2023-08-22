/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:44:10 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 15:59:52 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>

class ScalarConverter {
  public:
    static void convert(std::string const str);
    static void print(void);

  private:
    static char _char;
    static int _int;
    static float _float;
    static double _double;
    static bool _charNondisplayable;
    static bool _charImpossible;
    static bool _intImpossible;
    static bool _invalidFormat;

    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter const &t);

    ScalarConverter &operator=(ScalarConverter const &t);
};

#endif // SCALARCONVERTER_HPP
