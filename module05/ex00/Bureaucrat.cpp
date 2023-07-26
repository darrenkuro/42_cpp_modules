/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:29 by dlu               #+#    #+#             */
/*   Updated: 2023/07/26 13:55:15 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
    : _name(name), _grade(grade) {
    if (_grade < lowBoundGrade)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > highBoundGrade)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &t) {
    os << t.getName() << ", bureaucrat grade " << t.getGrade() << "."
       << std::endl;
    return os;
}
