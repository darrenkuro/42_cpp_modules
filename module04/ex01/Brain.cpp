/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:58:20 by dlu               #+#    #+#             */
/*   Updated: 2023/07/13 02:09:47 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain constructor called" << std::endl; }
Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }
Brain::Brain(Brain const &t) {
    *this = t;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &t) {
    for (int i = 0; i < _nIdea; i++)
        _ideas[i] = t._ideas[i];

    std::cout << "Brain assignment operator called" << std::endl;
    return *this;
}

std::string Brain::getIdea(int index) const {
    if (index < 0 || index >= _nIdea)
        throw std::domain_error("index out of range.");
    return _ideas[index];
};

void Brain::setIdea(int index, std::string idea) {
    if (index < 0 || index >= _nIdea)
        throw std::domain_error("index out of range.");
    _ideas[index] = idea;
}
