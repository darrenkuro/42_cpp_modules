/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:43:33 by dlu               #+#    #+#             */
/*   Updated: 2023/08/28 11:33:41 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <cstdlib>
#include <exception>
#include <fstream>
#include <iostream>
#include <map>

#define DATA_FILE "data.csv"

class BitcoinExchange {
  public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &t);
    BitcoinExchange &operator=(BitcoinExchange const &t);

    void printResult(std::string const &filename) const;

    class FilePermissionException : public std::exception {
      public:
        virtual char const *what() const throw();
    };
    class NumNotPositiveException : public std::exception {
      public:
        virtual char const *what() const throw();
    };
    class NumTooLargeException : public std::exception {
      public:
        virtual char const *what() const throw();
    };
    class BadInputException : public std::exception {
      public:
        BadInputException(std::string const line);
        virtual ~BadInputException() throw();
        virtual char const *what() const throw();

      private:
        std::string const _msg;
    };

  private:
    std::map<std::string, float> _data;
    void parseData(std::string const &filename);
    void validateDate(std::string date) const;
    bool isAllDigit(std::string const &str) const;
};

#endif // BITCOINEXCHANGE_HPP
