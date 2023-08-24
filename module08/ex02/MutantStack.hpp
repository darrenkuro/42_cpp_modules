/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:33:48 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 16:09:20 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

/**
 * When stack does not specify the container, deque is used by default.
 * this->c is refer to the container (deque in this case.)
 * MutantStack is the same as explicit MutantStack<T> (compiler magic).
 * `this` keyword is required in this case because c is inherited,
 * and probably in general a good practice to use it as well.
 */
template <typename T>
class MutantStack : public std::stack<T> {
  public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(MutantStack const &t) { *this = t; }

    MutantStack &operator=(MutantStack const &t) {
        if (this == &t)
            return *this;
        this->c = t.c;
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef
        typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator
        reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator
        const_reverse_iterator;

    iterator begin(void) { return this->c.begin(); }
    iterator end(void) { return this->c.end(); }
    const_iterator begin(void) const { return this->c.begin(); }
    const_iterator end(void) const { return this->c.end(); }
    reverse_iterator rbegin(void) { return this->c.rbegin(); }
    reverse_iterator rend(void) { return this->c.rend(); }
    const_reverse_iterator rbegin(void) const { return this->c.rbegin(); }
    const_reverse_iterator rend(void) const { return this->c.rend(); }
};

#endif // MUTANTSTACK_HPP
