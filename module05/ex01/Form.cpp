/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:57:18 by dlu               #+#    #+#             */
/*   Updated: 2023/08/03 13:51:48 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
    : _name("Default"), _signGrade(highestGrade), _execGrade(highestGrade),
      _signed(false) {}
Form::~Form() {}
Form::Form(Form const &t)
    : _name(t.getName()), _signGrade(t.getSignGrade()),
      _execGrade(t.getExecGrade()), _signed(t.getSigned()) {}
Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade)
    : _name(name), _signGrade(signGrade), _execGrade(execGrade),
      _signed(false) {
    if (_signGrade < highestGrade || _execGrade < highestGrade)
        throw Form::GradeTooHighException(_name, true);
    if (_signGrade > lowestGrade || _execGrade > lowestGrade)
        throw Form::GradeTooLowException(_name, true);
}

Form &Form::operator=(Form const &t) {
    if (this == &t)
        return *this;
    _signed = t.getSigned();
    return *this;
}

std::string const Form::getName() const { return _name; }
unsigned int Form::getSignGrade() const { return _signGrade; }
unsigned int Form::getExecGrade() const { return _execGrade; }
bool Form::getSigned() const { return _signed; }

void Form::beSigned(Bureaucrat &signer) {
    if (signer.getGrade() > _signGrade)
        throw Form::GradeTooLowException(signer.getName(), false);
    _signed = true;
}

Form::GradeTooHighException::GradeTooHighException(std::string const name,
                                                   bool required) {
    if (required)
        _msg = "Form Exception: " + name + " required grade too high!";
    else
        _msg = name + "'s grade is too high";
}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
char const *Form::GradeTooHighException::what() const throw() {
    return _msg.c_str();
}
Form::GradeTooLowException::GradeTooLowException(std::string const name,
                                                 bool required) {
    if (required)
        _msg = "Form Exception: " + name + " required grade too low!";
    else
        _msg = name + "'s grade is too low";
}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
char const *Form::GradeTooLowException::what() const throw() {
    return _msg.c_str();
}

std::ostream &operator<<(std::ostream &os, Form const &t) {
    os << "Form: " << t.getName()
       << ", required grade to sign: " << t.getSignGrade()
       << ", required grade to execute: " << t.getExecGrade()
       << ", signed: " << std::boolalpha << t.getSigned() << ".";
    return os;
}
