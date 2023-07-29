/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:04:37 by dlu               #+#    #+#             */
/*   Updated: 2023/07/29 21:31:22 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}
Span::~Span() {}
Span::Span(unsigned int n) : _N(n) {}
Span::Span(Span const &t) : _N(t._N) {
    _container.assign(t._container.begin(), t._container.end());
};

Span &Span::operator=(Span const &t) {
    if (this == &t)
        return *this;
    if (t._container.size() > _N)
        throw SpanOverflowException();
    // algorithm method to perform a deep copy
    _container.assign(t._container.begin(), t._container.end());
    return *this;
}

void Span::addNumber(int val) {
    if (_container.size() >= _N)
        throw SpanOverflowException();
    _container.push_back(val);
}

void Span::addRange(std::vector<int>::iterator begin,
                    std::vector<int>::iterator end) {
    if (_container.size() + std::distance(begin, end) > _N) {
        throw SpanOverflowException();
    }
    _container.insert(_container.end(), begin, end);
}

unsigned int Span::shortestSpan(void) const {
    if (_container.size() < 2)
        throw SpanNotFoundException();

    int ret = std::abs(_container.at(1) - _container.at(0));
    for (std::vector<int>::size_type i = 1; i < _container.size() - 1; i++)
        ret = std::min(std::abs(_container.at(i + 1) - _container.at(i)), ret);
    return static_cast<unsigned int>(ret);
}

unsigned int Span::longestSpan(void) const {
    if (_container.size() < 2)
        throw SpanNotFoundException();
    int ret = std::abs(_container.at(1) - _container.at(0));
    for (std::vector<int>::size_type i = 1; i < _container.size() - 1; i++)
        ret = std::max(std::abs(_container.at(i + 1) - _container.at(i)), ret);
    return static_cast<unsigned int>(ret);
}

char const *Span::SpanOverflowException::what() const throw() {
    return "Span Exception: maximal capacity reached!";
}

char const *Span::SpanNotFoundException::what() const throw() {
    return "Span Exception: not enough data!";
}
