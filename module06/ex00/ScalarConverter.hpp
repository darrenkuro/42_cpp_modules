/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:44:10 by dlu               #+#    #+#             */
/*   Updated: 2023/08/20 03:29:10 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <exception>
#include <iostream>

enum e_type { CHAR, INT, FLOAT, DOUBLE };

class ScalarConverter {
  public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(ScalarConverter const &t);

    ScalarConverter &operator=(ScalarConverter const &t);

    static void convert(std::string const str);

    // class ImpossibleException : public std::exception {
    //   public:
    //     virtual char const *what() const throw();
    // };
    // class NondisplayableException : public std::exception {
    //   public:
    //     virtual char const *what() const throw();
    // };

  private:
    static e_type _type;
    static char _char;
    static int _int;
    static float _float;
    static double _double;

    e_type getType(std::string const str);
};

#endif // SCALARCONVERTER_HPP
