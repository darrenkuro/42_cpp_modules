/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:26:29 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:16:17 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(lowestGrade) {}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(Bureaucrat const &t)
    : _name(t.getName()), _grade(t.getGrade()) {}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
    : _name(name), _grade(grade) {
    if (_grade < highestGrade)
        throw Bureaucrat::GradeTooHighException(_name);
    if (_grade > lowestGrade)
        throw Bureaucrat::GradeTooLowException(_name);
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &t) {
    if (this == &t)
        return *this;
    _grade = t.getGrade();
    return *this;
}

std::string const Bureaucrat::getName(void) const { return _name; }
unsigned int Bureaucrat::getGrade(void) const { return _grade; }
void Bureaucrat::incrementGrade(void) {
    if (--_grade < highestGrade)
        throw Bureaucrat::GradeTooHighException(_name);
}
void Bureaucrat::decrementGrade(void) {
    if (++_grade > lowestGrade)
        throw Bureaucrat::GradeTooLowException(_name);
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because "
                  << e.what() << "." << std::endl;
    }
}

void Bureaucrat::executeForm(AForm &form) {
    try {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << _name << " couldn't execute " << form.getName()
                  << " because " << e.what() << "." << std::endl;
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const name)
    : _msg("Bureaucrat Exception: " + name + " grade too high!") {}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
char const *Bureaucrat::GradeTooHighException::what() const throw() {
    return _msg.c_str();
}
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const name)
    : _msg("Bureaucrat Exception: " + name + " grade too low!") {}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
char const *Bureaucrat::GradeTooLowException::what() const throw() {
    return _msg.c_str();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &t) {
    os << t.getName() << ", bureaucrat grade " << t.getGrade() << ".";
    return os;
}
