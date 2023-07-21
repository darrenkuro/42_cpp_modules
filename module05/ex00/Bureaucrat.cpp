/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:29 by dlu               #+#    #+#             */
/*   Updated: 2023/07/21 16:43:11 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
    : _name(name), _grade(grade) {
    if (_grade < lowBoundGrade || _grade > highBoundGrade)
        std::cout << "hello"; // throw exception here.
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &t) {
    os << t.getName() << ", bureaucrat grade " << t.getGrade() << "."
       << std::endl;
    return os;
}
