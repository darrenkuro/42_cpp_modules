/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:44:12 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 04:59:42 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::_char = 0;
int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0;
double ScalarConverter::_double = 0;
bool ScalarConverter::_charNondisplayable = false;
bool ScalarConverter::_charImpossible = false;
bool ScalarConverter::_intImpossible = false;
bool ScalarConverter::_invalidFormat = false;

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &t) { *this = t; }

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &t) {
    (void)t;
    return *this;
}

void ScalarConverter::convert(std::string const str) {
    // Attempt to convert to double
    char *endptr;
    _double = std::strtod(str.c_str(), &endptr);

    // Check format
    _invalidFormat = false;
    if ((endptr == &str[0] && str.length() != 1) || std::strlen(endptr) > 1 ||
        (endptr != &str[0] && *endptr != 'f' && *endptr != 0)) {
        _invalidFormat = true;
        return;
    }

    // Handle if it's char
    if (str.length() == 1 && !std::isdigit(str[0])) {
        _char = str[0];
        _charNondisplayable = std::isprint(_char) ? false : true;
        _charImpossible = false;
        _intImpossible = false;
        _int = static_cast<int>(_char);
        _float = static_cast<float>(_char);
        _double = static_cast<double>(_char);
        return;
    }

    // Cast from double
    _char = static_cast<char>(_double);
    _int = static_cast<int>(_double);
    _float = static_cast<float>(_double);

    // Handle impossible and Non displayable cases
    _charImpossible = std::isnan(_double) || std::isinf(_double) ||
                      _double < SCHAR_MIN || _double > SCHAR_MAX;
    _charNondisplayable = !std::isprint(_char);
    _intImpossible = std::isnan(_double) || std::isinf(_double) ||
                     _double < INT_MIN || _double > INT_MAX;
}

void ScalarConverter::print(void) {
    if (_invalidFormat) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }
    if (_charImpossible)
        std::cout << "char: impossible" << std::endl;
    else if (_charNondisplayable)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << _char << "'" << std::endl;
    if (_intImpossible)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << _int << std::endl;
    if (_float - _int == 0)
        std::cout << "float: " << _float << ".0f" << std::endl;
    else
        std::cout << "float: " << _float << "f" << std::endl;
    if (_double - _int == 0)
        std::cout << "double: " << _double << ".0" << std::endl;
    else
        std::cout << "double: " << _double << std::endl;
}
