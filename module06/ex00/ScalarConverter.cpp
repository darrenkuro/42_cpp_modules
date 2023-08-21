/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:44:12 by dlu               #+#    #+#             */
/*   Updated: 2023/08/20 03:29:36 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &t) { *this = t; }

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &t) {
    (void)t;
    return *this;
}

// char const *ScalarConverter::ImpossibleException::what() const throw() {
//     return "impossible";
// }
// char const *ScalarConverter::NondisplayableException::what() const throw() {
//     return "Non displayable";
// }
e_type ScalarConverter::getType(std::string const str) {}

void ScalarConverter::convert(std::string const str) {}
