/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:57:18 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:21:59 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
    : _name("Default"), _signGrade(highestGrade), _execGrade(highestGrade),
      _signed(false) {}
AForm::~AForm() {}
AForm::AForm(AForm const &t)
    : _name(t.getName()), _signGrade(t.getSignGrade()),
      _execGrade(t.getExecGrade()), _signed(t.getSigned()) {}
AForm::AForm(std::string name, unsigned int signGrade, unsigned int execGrade)
    : _name(name), _signGrade(signGrade), _execGrade(execGrade),
      _signed(false) {
    if (_signGrade < highestGrade || _execGrade < highestGrade)
        throw AForm::GradeTooHighException(_name, true);
    if (_signGrade > lowestGrade || _execGrade > lowestGrade)
        throw AForm::GradeTooLowException(_name, true);
}

AForm &AForm::operator=(AForm const &t) {
    if (this == &t)
        return *this;
    _signed = t.getSigned();
    return *this;
}

std::string const AForm::getName() const { return _name; }
unsigned int AForm::getSignGrade() const { return _signGrade; }
unsigned int AForm::getExecGrade() const { return _execGrade; }
bool AForm::getSigned() const { return _signed; }

void AForm::beSigned(Bureaucrat &signer) {
    if (signer.getGrade() > _signGrade)
        throw AForm::GradeTooLowException(signer.getName(), false);
    _signed = true;
}

AForm::GradeTooHighException::GradeTooHighException(std::string const name,
                                                    bool required) {
    if (required)
        _msg = "Form Exception: " + name + " required grade too high!";
    else
        _msg = name + "'s grade is too high";
}
AForm::GradeTooHighException::~GradeTooHighException(void) throw() {}
char const *AForm::GradeTooHighException::what() const throw() {
    return _msg.c_str();
}
AForm::GradeTooLowException::GradeTooLowException(std::string const name,
                                                  bool required) {
    if (required)
        _msg = "Form Exception: required grade too low!";
    else
        _msg = name + "'s grade is too low";
}
AForm::GradeTooLowException::~GradeTooLowException(void) throw() {}
char const *AForm::GradeTooLowException::what() const throw() {
    return _msg.c_str();
}

AForm::NotSignedException::NotSignedException(std::string const name)
    : _msg("Form " + name + " is not signed") {}
AForm::NotSignedException::~NotSignedException(void) throw() {}
char const *AForm::NotSignedException::what() const throw() {
    return _msg.c_str();
}

std::ostream &operator<<(std::ostream &os, AForm const &t) {
    os << "AForm: " << t.getName()
       << ", required grade to sign: " << t.getSignGrade()
       << ", required grade to execute: " << t.getExecGrade()
       << ", signed: " << std::boolalpha << t.getSigned() << ".";
    return os;
}
