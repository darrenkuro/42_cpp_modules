/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:43:36 by dlu               #+#    #+#             */
/*   Updated: 2023/08/25 02:19:03 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { parseData(DATA_FILE); }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &t) { *this = t; }
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &t) {
    if (this == &t)
        return *this;
    _data.clear();
    parseData(DATA_FILE);
    return *this;
}

void BitcoinExchange::printResult(std::string const &filename) const {
    std::ifstream file(filename);
    if (!file.is_open())
        throw FilePermissionException();

    std::string line;
    // throw away the first line (header)
    std::getline(file, line);
    while (std::getline(file, line)) {
        if (line.find(" | ") == std::string::npos) {
            std::cout << BadInputException(line).what() << std::endl;
            continue;
        }

        std::string const date = line.substr(0, line.find(" | "));
        std::string const valueStr = line.substr(line.find(" | ") + 3);
        try {
            validateDate(date);
            size_t pos;
            float const value = std::stof(valueStr, &pos);
            if (pos < valueStr.length())
                throw std::exception();
            if (value < 0)
                std::cout << NumNotPositiveException().what() << std::endl;
            else if (value > 1000)
                std::cout << NumTooLargeException().what() << std::endl;
            else {
                std::map<std::string, float>::const_iterator it =
                    _data.lower_bound(date);
                if (it != _data.begin() && it->first != date)
                    --it;
                std::cout << date << " => " << value << " = "
                          << it->second * value << std::endl;
            }
        } catch (std::exception &e) {
            std::cout << BadInputException(line).what() << std::endl;
            continue;
        }
    }
    file.close();
}

void BitcoinExchange::parseData(std::string const &filename) {
    std::ifstream file(filename);
    if (!file.is_open())
        throw FilePermissionException();

    std::string line;
    // throw away the first line (header)
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::string date = line.substr(0, line.find(','));
        std::string value = line.substr(line.find(',') + 1);
        _data.insert(std::pair<std::string, float>(date, std::stof(value)));
    }
    file.close();
}

void BitcoinExchange::validateDate(std::string date) const {
    try {
        std::string yearStr = date.substr(0, date.find('-'));
        date.erase(date.begin(), date.begin() + date.find('-') + 1);
        std::string monthStr = date.substr(0, date.find('-'));
        date.erase(date.begin(), date.begin() + date.find('-') + 1);
        std::string dayStr = date;
        if (yearStr.length() != 4 || monthStr.length() != 2 ||
            dayStr.length() != 2 || !isAllDigit(yearStr) ||
            !isAllDigit(monthStr) || !isAllDigit(dayStr))
            throw std::exception();

        int year = std::stoi(yearStr);
        int month = std::stoi(monthStr);
        int day = std::stoi(dayStr);
        if (year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 ||
            day > 31)
            throw std::exception();
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (month == 2 && day > 29)
                throw std::exception();
        } else {
            if (month == 2 && day > 28)
                throw std::exception();
        }
        if ((month == 4 || month == 6 || month == 9 || month == 1) && day > 30)
            throw std::exception();
    } catch (std::exception &e) {
        throw e;
    }
}

bool BitcoinExchange::isAllDigit(std::string const &str) const {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!std::isdigit(*it)) {
            return false;
        }
    }
    return true;
}

/* Exceptions. */
char const *BitcoinExchange::FilePermissionException::what() const throw() {
    return "Error: fail to load file.";
}
char const *BitcoinExchange::NumNotPositiveException::what() const throw() {
    return "Error: not a positive number.";
}
char const *BitcoinExchange::NumTooLargeException::what() const throw() {
    return "Error: too large a number.";
}
BitcoinExchange::BadInputException::BadInputException(std::string const line)
    : _msg("Error: bad input => " + line) {}
BitcoinExchange::BadInputException::~BadInputException(void) throw() {}
char const *BitcoinExchange::BadInputException::what() const throw() {
    return _msg.c_str();
}
