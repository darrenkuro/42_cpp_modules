/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:10:41 by dlu               #+#    #+#             */
/*   Updated: 2023/08/25 04:53:40 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(RPN const &t) { *this = t; }
RPN &RPN::operator=(const RPN &t) {
    if (this == &t)
        return (*this);
    _stack = t._stack;
    return (*this);
}

void RPN::printResult(std::string str) {
    while (str.length()) {
        std::string token;
        if (str.find(' ') != std::string::npos)
            token = str.substr(0, str.find(' '));
        else
            token = str;
        if (token.length() != 1)
            throw ParsingException();
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (_stack.size() < 2)
                throw ParsingException();
            int op2 = _stack.top();
            _stack.pop();
            int op1 = _stack.top();
            _stack.pop();
            switch (token[0]) {
            case '+':
                _stack.push(op1 + op2);
                break;
            case '-':
                _stack.push(op1 - op2);
                break;
            case '*':
                _stack.push(op1 * op2);
                break;
            case '/':
                if (op2 == 0)
                    throw ParsingException();
                _stack.push(op1 / op2);
                break;
            }
        } else if (std::isdigit(token[0])) {
            _stack.push(token[0] - '0');
        } else {
            throw ParsingException();
        }
        if (str.find(' ') != std::string::npos)
            str.erase(str.begin(), str.begin() + str.find(' ') + 1);
        else
            str = "";
    }
    if (_stack.size() != 1)
        throw ParsingException();
    else
        std::cout << _stack.top() << std::endl;
}

char const *RPN::ParsingException::what(void) const throw() { return "Error"; }
