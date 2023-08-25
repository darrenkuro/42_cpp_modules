/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:09:43 by dlu               #+#    #+#             */
/*   Updated: 2023/08/25 02:59:50 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <cctype>
#include <exception>
#include <iostream>
#include <stack>

class RPN {
  public:
    RPN();
    ~RPN();
    RPN(RPN const &t);
    RPN &operator=(RPN const &t);

    void printResult(std::string str);

    class ParsingException : public std::exception {
      public:
        virtual char const *what() const throw();
    };

  private:
    std::stack<int> _stack;
};

#endif // RNP_HPP
