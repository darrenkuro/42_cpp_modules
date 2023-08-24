/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:04:35 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 16:26:26 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstdlib>
#include <exception>
#include <vector>

class Span {
  public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(Span const &t);

    Span &operator=(Span const &t);

    void addNumber(int val);
    void addRange(std::vector<int>::iterator begin,
                  std::vector<int>::iterator end);
    unsigned int shortestSpan(void) const;
    unsigned int longestSpan(void) const;

    class SpanOverflowException : public std::exception {
      public:
        virtual char const *what() const throw();
    };
    class SpanNotFoundException : public std::exception {
      public:
        virtual char const *what() const throw();
    };

  private:
    unsigned int const _N;
    std::vector<int> _container;
};

#endif
