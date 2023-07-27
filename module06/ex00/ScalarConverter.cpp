/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:44:12 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 08:44:01 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &t) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &t) {}

static void convert(std::string const str) {}
std::ostream &operator<<(std::ostream &os, ScalarConverter const &t) {}
