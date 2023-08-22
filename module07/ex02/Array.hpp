/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:29:14 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 16:15:53 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <exception>

template <typename T>
class Array {
  public:
    Array() : _head(new T[0]), _size(0){};
    Array(unsigned int n) : _head(new T[n]), _size(n){};
    ~Array() { delete[] _head; };
    Array(Array const &t) : _head(new T[0]) { *this = t; };
    Array &operator=(Array const &t) {
        if (this == &t)
            return *this;
        if (_head)
            delete[] _head;
        _head = new T[t.size()];
        _size = t.size();
        for (unsigned int i = 0; i < _size; i++)
            _head[i] = t[i];
        return *this;
    };

    T &operator[](unsigned int idx) {
        if (idx >= _size)
            throw Array::InvalidIndexException();
        return _head[idx];
    };

    const T &operator[](unsigned int idx) const {
        if (idx >= _size)
            throw Array::InvalidIndexException();
        return _head[idx];
    };

    unsigned int size(void) const { return _size; };

    class InvalidIndexException : public std::exception {
      public:
        virtual char const *what() const throw() {
            return "Invalid index: out of bound!";
        }
    };

  private:
    T *_head;
    unsigned int _size;
};

#endif // ARRAY_HPP
