/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:36:38 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 07:38:41 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string const Intern::_formName[Intern::_nForm] = {
    "presidential pardon", "robotomy request", "shrubbery creation"};

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(Intern const &t) { (void)t; }
Intern &Intern::operator=(Intern const &t) {
    (void)t;
    return *this;
}

int Intern::getIndex(std::string const form) {
    int idx = -1;
    for (int i = 0; i < _nForm; i++)
        if (form == _formName[i])
            idx = i;
    return (idx);
}

Intern::InvalidFormException::InvalidFormException(std::string const form)
    : _msg("Intern Exception: Invalid Form " + form + "!") {}
Intern::InvalidFormException::~InvalidFormException() throw() {}
char const *Intern::InvalidFormException::what() const throw() {
    return _msg.c_str();
}

AForm *Intern::makeForm(std::string const form, std::string const target) {
    int const idx = getIndex(form);
    if (idx == -1)
        throw Intern::InvalidFormException(form);

    AForm *forms[_nForm] = {new PresidentialPardonForm(target),
                            new RobotomyRequestForm(target),
                            new ShrubberyCreationForm(target)};
    for (int i = 0; i < _nForm; i++)
        if (i != idx)
            delete forms[i];
    std::cout << "Intern creates " << form << std::endl;
    return forms[idx];
}
